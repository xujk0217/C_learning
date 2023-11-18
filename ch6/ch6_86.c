#include <stdio.h>

int main()
{
    int rowNumber, columnNumber;
    scanf("%d%d", &rowNumber, &columnNumber);
    int row[rowNumber][columnNumber];
    int x;
    for (int j = 0; j < rowNumber; j++){
        for (int i = 0; i < columnNumber; i++){
            scanf("%d", &x);
            row[j][i] = x;
        }
    }
    for (int i = 0; i <columnNumber; i++){
        for (int j = 0; j<rowNumber; j++){
            printf("%d ", row[j][i]);
        }
        printf("\n");
    }
}