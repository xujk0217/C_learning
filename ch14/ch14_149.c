#include <stdio.h>
#include <string.h>
#include<strings.h>
#include<stdlib.h>

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
        struct data *address;
        struct data *rec = address;
        for(int i = 0; i < n; i++){
            scanf("%s", address->med);
            scanf("%d", &address->time);
            struct data *medic = (struct data*)malloc(sizeof(struct data));
            address->next = medic;
            address = medic;
        }
        int eaten = 0;
        int time = 0;
        struct data *recCope = rec;
        while (eaten < k)
        {
            time +=5;
            for(int i = 0; i < n-1; i++){
                if(time >= recCope->time && time % recCope->time == 0){
                    printf("%d ", time);
                    printf("%s", recCope->med);
                    eaten+=1;
                    if(eaten == k){
                        break;
                    }
                }
                recCope = recCope->next;
            }
        }
    }
}