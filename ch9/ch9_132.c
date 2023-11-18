/*
#include "bubble.h"
void bubble(int *arr)
{
    int *ar = arr;
    int *arrt = arr;
    for(int i = 0; i < 5-1; i++){
        for(int j = 0 ; j < 4 - i; j++){
            if(*arrt>*(arrt+1)){
                int tem = *arrt;
                *arrt = *(arrt+1);
                *(arrt+1) = tem;
            }
            arrt+=1;
        }
        arrt = ar;
    }
    for(int i = 0; i < 5; i++){
        printf("%d", *ar);
        if(i!=4){
            printf(" ");
        }
        ar+=1;
    }
}
*/


#include <stdio.h>
//#include "bubble.h"
 
int main()
{
    int arr[5];
    int i;
    for( i=0 ; i<5 ; i++)
    {
        scanf("%d",&arr[i]);
    }


    int *arrt = arr;
    int *ar = arr;

    for(int i = 0; i < 5-1; i++){
        for(int j = 0 ; j < 4 - i; j++){
            if(*arrt>*(arrt+1)){
                int tem = *arrt;
                *arrt = *(arrt+1);
                *(arrt+1) = tem;
            }
            arrt+=1;
        }
        arrt = ar;
    }
    for(int i = 0; i < 5; i++){
        printf("%d", *ar);
        if(i!=4){
            printf(" ");
        }
        ar+=1;
    }

}