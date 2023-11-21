#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void len(char *arr)
{
    char *begin = arr;
    char *end = *(&arr + 1);
    printf("%d\n", end - begin);
}
