#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void len(char *arr)
{
    char str[60];
    for(int i = 0; i <60; i++, arr++){
        str[i] = *arr;
    }
    printf("%d", strlen(str));
}
