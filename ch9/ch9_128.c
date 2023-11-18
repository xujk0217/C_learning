
#include "mysum.h"
int mysum(int *a, int size) {
    int sum = 0;
    for(int i = 0; i < 4; i++){
        sum+=*a;
        a+=1;
    }
    return sum;
}


#include <stdio.h>
//#include "mysum.h"
 
int main(){
 
    int data[4] = {};
    for(int i = 0; i < 4; i++) {
          scanf("%d", &data[i]);
      }
    int size = sizeof(data) / sizeof(data[0]);
    //printf("%d", size);
    int sum = 0;
    for(int i = 0; i < 4; i++){
        sum+=*data;
        &data+=1;
    }
    printf("%d\n", sum);
 
    return 0;
 
}