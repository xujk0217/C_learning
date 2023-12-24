#include<stdio.h>

void to_one(int *array){
    for(int i = 0; i < 10; i++){
        array[i] = 1;
    }
}

int main(){
    int array[10] = {0};
    to_one(array);
    printf("%d", array[5]);
}