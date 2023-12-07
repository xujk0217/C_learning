#include <stdio.h>
#include <stdlib.h>

struct data
{
    char med[15];
    int time;
    struct data *next;
};

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long int n, k;
        scanf("%ld%ld", &n, &k);
        
        struct data *address = NULL;
        struct data *rec = NULL;

        for (int i = 0; i < n; i++)
        {
            struct data *medic = (struct data *)malloc(sizeof(struct data));
            scanf("%s", medic->med);
            scanf("%d", &medic->time);
            medic->next = NULL;

            if (address == NULL)
            {
                // 第一个节点
                address = medic;
                rec = address;
            }
            else
            {
                // 将节点添加到列表末尾
                rec->next = medic;
                rec = medic;
            }
        }

        int eaten = 0;
        int time = 0;
        struct data *recCope = address;

        while (eaten < k)
        {
            time += 5;
            recCope = address; // 每次迭代重置到列表的开头

            for (int i = 0; i < n; i++)
            {
                if (time >= recCope->time && time % recCope->time == 0)
                {
                    printf("%d %s\n", time, recCope->med);
                    eaten += 1;
                    if (eaten == k)
                    {
                        break;
                    }
                }
                recCope = recCope->next;
            }
        }

        // 释放为链表分配的内存
        recCope = address;
        while (recCope != NULL)
        {
            struct data *temp = recCope;
            recCope = recCope->next;
            free(temp);
        }
    }

    return 0;
}
