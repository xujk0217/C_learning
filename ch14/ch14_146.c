#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
 
typedef struct pair {
    int frequency;
    char charASCII;
} pair;
 
void print(pair* myData)
{
    int i;
    for (i=0 ; i<95 ; i++)
        (myData[i].frequency==0)?printf(""):printf("%d %d\n",myData[i].charASCII,myData[i].frequency);
}
 
int main()
{
    struct pair* myData=(struct pair*)malloc(95*sizeof(struct pair));
    int i, len, flag=0;
    char str[9999];
 
    while (gets(str)!=NULL) {
        if (flag!=0) printf("\n");
        flag++;
        / add your code /
        print(myData);
    }
    return 0;
}