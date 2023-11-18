#include <stdio.h>
int first_positive(int array[10], int position){
    while(array[position] <= 0){
        position+=1;
    return position;
    }
}

int main(){
    int array[10] = {0, 0, 0, 5, 9, 0, 0, 6, 0, 2};
    int position = 0;
    for(int i = 0; i < 4; i++, position++){
        position = first_positive(array, position);
        printf("%d\t%d\n", position, array[position]);
    }
}