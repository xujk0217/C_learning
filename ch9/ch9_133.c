/*
#include "mymul.h"
int mymul(int *a, int size) {
    int sum = 1;
    for(int i = 0; i < 4; i++){
        sum *= *a;
        a+=1;
    }
    return sum;
}
*/

#include <stdio.h>
//#include "mymul.h"
 
int main(){
    int data[4] = {};
    for(int i=0; i<4; i++){
          scanf("%d", &data[i]);
      }
    int size = sizeof(data) / sizeof(data[0]);
    int *a = data;
    int sum = 1;
    for(int i = 0; i < 4; i++){
        sum *= *a;
        a+=1;
    }
    printf("%d", sum);
    printf("%d\n", mymul(data, size));
}