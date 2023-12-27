#include<stdio.h>
#include<stdlib.h>

void sort(int n, int *arr){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1-i; j++){
            if(arr[j]>arr[j+1]){
                int tem = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tem;
            }
        }
    }
}

void swap(int*a, int*b){
    int tem = *a;
    *a = *b;
    *b = tem;
}

void permutation(int *arr, int start, int end){
    static int count = 0;
    if(start == end){
        for (int i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        count +=1;
        int sumtime = 1;
        for(int i = 1; i <= end+1; i++){
            sumtime*=i;
        }
        if(count < sumtime){
            printf("\n");
        }
        return;
    }

    for(int i = start; i <=end; i++){
        swap(&arr[start], &arr[i]);
        permutation(arr, start+1, end);
        swap(&arr[i], &arr[start]);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    sort(n, arr);

    permutation(arr, 0, n-1);
}