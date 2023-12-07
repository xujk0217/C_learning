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

void printmed (int time, int *node){

}

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        double n, k;
        scanf("%ld%ld", n, k);
        struct data *address;
        struct data *rec = address;
        for(int i = 0; i < n; i++){
            scanf("%s", address->med);
            scanf("%d", address->time);
            struct data *medic = (struct data*)malloc(sizeof(struct data));
            address->next = medic;
            address = medic;
        }
        int eaten = 0;
        int time = 0;
        while (eaten != k)
        {
            time +=1;
            for(int i = 0; i < n; i++){
                if(time == add)
            }
        }
    }
}