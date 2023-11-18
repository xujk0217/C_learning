#include <stdio.h> //for print
#include <string.h> //for string
#define _CRT_SWCURE_NO_WARNINGS //for input

int main(){
    int n, m;
    scanf("%d%d",&n, &m);
    int plus = n+m;
    int plusm = n-m;
    int pluss = n*m;
    int plusd = n/m;
    int plusdd = n%m;
    printf("%d\n",plus);
    printf("%d\n",plusm);
    printf("%d\n",pluss);
    printf("%d\n",plusd);
    printf("%d\n",plusdd);
    
}