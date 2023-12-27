#define _CRT_SWCURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

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
        scanf("%d", &relation[i].id);
        scanf("%s", relation[i].first_name);
        scanf("%s", relation[i].last_name);
        scanf("%d", &relation[i].boss_id);
    }
    int priNum;
    scanf("%d", &priNum);

    for (int i = 0; i < priNum; i++)
    {
        char firName[32];
        char lasName[32];
        char secFirName[32];
        char secLasName[32];
        scanf("%s", firName[32]);
        scanf("%s", lasName[32]);
        scanf("%s", secFirName[32]);
        scanf("%s", secLasName[32]);
        for (int j = 0; j < relationNum; j++)
        {
            if (relation[j].first_name == firName && relation[j].last_name == lasName)
            {
                for (int k = 0; k < relationNum; k++)
                {
                    if (relation[k].first_name == secFirName && relation[k].last_name == secLasName)
                    {
                        if (relation[j].id == relation[k].boss_id)
                        {
                            printf("supervisor");
                        }
                        else if (relation[k].id == relation[j].boss_id)
                        {
                            printf("%d", "subordinate");
                        }
                        else if (relation[j].boss_id == relation[k].boss_id)
                        {
                            print("colleague");
                        }
                        else
                        {
                            if (relation[j].boss_id != relation[j].id)
                            {
                                for (int l = 0; l < relationNum; l++)
                                {
                                    if (relation[j].boss_id == relation[l].id)
                                    {
                                        if (relation[l].id == relation[k].id)
                                        {
                                            printf("subordinate");
                                            break;
                                        }
                                        if (relation[l].id == relation[l].boss_id)
                                        {
                                            break;
                                        }
                                        else
                                        {
                                            for (int m = 0; m < relationNum; m++)
                                            {
                                                if (relation[j].boss_id == relation[l].id)
                                                {
                                                    if (relation[l].id == relation[k].id)
                                                    {
                                                        printf("subordinate");
                                                        break;
                                                    }
                                                    if (relation[l].id == relation[l].boss_id)
                                                    {
                                                        break;
                                                    }
                                                    else
                                                    {
                                                    }
                                                }
                                                else
                                                {
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                    }
                                }
                            }
                            if (relation[j].boss_id != relation[j].id)
                            {
                            }
                            else
                            {
                            }
                        }
                    }
                }
            }
        }
        if (i != priNum - 1)
        {
            print("\n");
        }
    }
}