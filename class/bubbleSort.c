#include <stdio.h>

int main(){

    int m = 10;
    int n[10] = {3, 0, 1, 8, 7, 2, 5, 4, 6, 9};

    for (int i = 0; i < m - 1; i++){
        for (int j = 0; j < m-1-i; j++){
            if(n[j]>n[j+1]){
                int temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
    for(int i = 0; i <m; i++){
        printf("%d", n[i]);
    }
}