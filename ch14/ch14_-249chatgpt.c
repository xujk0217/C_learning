#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
    int id;
    char first_name[32];
    char last_name[32];
    int boss_id;
};

int main()
{
    int relationNum;
    scanf("%d", &relationNum);

    struct employee *relation = (struct employee *)malloc(relationNum * sizeof(struct employee));

    for (int i = 0; i < relationNum; i++)
    {
        scanf("%d %s %s %d", &relation[i].id, relation[i].first_name, relation[i].last_name, &relation[i].boss_id);
    }

    int priNum;
    scanf("%d", &priNum);

    for (int i = 0; i < priNum; i++)
    {
        char firName[32];
        char lasName[32];
        char secFirName[32];
        char secLasName[32];
        scanf("%s %s %s %s", firName, lasName, secFirName, secLasName);

        int foundFirst = 0, foundSecond = 0;
        int bossIDFirst = -1, bossIDSecond = -1;

        for (int j = 0; j < relationNum; j++)
        {
            if (strcmp(relation[j].first_name, firName) == 0 && strcmp(relation[j].last_name, lasName) == 0)
            {
                foundFirst = 1;
                bossIDFirst = relation[j].boss_id;
            }

            if (strcmp(relation[j].first_name, secFirName) == 0 && strcmp(relation[j].last_name, secLasName) == 0)
            {
                foundSecond = 1;
                bossIDSecond = relation[j].boss_id;
            }
        }

        if (foundFirst && foundSecond)
        {
            if (bossIDFirst == bossIDSecond)
            {
                printf("colleague");
            }
            else if (bossIDFirst == -1)
            {
                printf("subordinate");
            }
            else if (bossIDSecond == -1)
            {
                printf("supervisor");
            }
            else
            {
                // Check supervisor-subordinate relationship
                int tempBossID = bossIDFirst;
                int flag = 0;

                while (tempBossID != -1)
                {
                    if (tempBossID == bossIDSecond)
                    {
                        printf("subordinate");
                        flag = 1;
                        break;
                    }

                    for (int k = 0; k < relationNum; k++)
                    {
                        if (relation[k].id == tempBossID)
                        {
                            tempBossID = relation[k].boss_id;
                            break;
                        }
                    }
                }

                if (flag == 0)
                {
                    printf("unrelated");
                }
            }
        }
        else
        {
            printf("unrelated");
        }

        if (i != priNum - 1)
        {
            printf("\n");
        }
    }

    free(relation); // 釋放動態分配的記憶體

    return 0;
}
