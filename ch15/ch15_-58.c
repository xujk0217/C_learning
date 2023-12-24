#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int lake_size(int i, int j, int picture[], int n, int m){
    int size = 1;
    picture[i * m + j] = 2;
    int side[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    for(int k = 0; k < 4; k++){
        i+=side[k][0];
        j+=side[k][1];
        if(i>=0 && j >= 0 && i < n && j < m && picture[(i*m) + j] == 1)
            size += lake_size(i, j, picture, n, m);
        i-=side[k][0];
        j-=side[k][1];
    }
    return size;
}

int main(){
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int picture[n * m];
    for(i = 0; i <n; i++){
        for(j = 0; j < m; j++){
            scanf("%d", &picture[i*m+j]);
        }
    }
    int size[n*m/2+1];int k = 0;
    for(i = 0; j <m; j++){
        for(j = 0; j < m; j++){
            if(picture[i*m+j] == 1){
                size[k] = lake_size(i, j, picture, n, m);
                k++;
            }
        }
    }
    for(i = 1; i < k; i++){
        for(j = 0; j < k-i; j++){
            if(size[j]<size[j+1]){
                int tem = size[j];
                size[j] = size[j+1];
                size[j+1] = tem;
            }
        }
    }
    for(i = 1; i < k; i++){
        for(j = 0; j < k-i; j++){
            if(size[j]<size[j+1]){
                int tem = size[j];
                size[j] = size[j+1];
                size[j+1] = tem;
            }
        }
    }
    for(i = 0; i < k; i++){
        printf("%d\n", size[i]);
    }
}