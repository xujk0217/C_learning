#include<stdio.h>
int main(){
    int n;
    int l;
    int swap = 0;
    int time = 0;
    scanf("%d", &n);
    int L[50];
    for (int i = 0; i<n; i++){
        scanf("%d", &l);
        for (int j = 0; j<l; j++){
            //int L[l];
            scanf("%d", &L[j]);
        }
        //bubbleSort
        for(int i = 0; i < l-1; i++){
            for(int j = 0; j < l-i-1; j++){
                if(L[j]>L[j+1]){
                    int tem = L[j];
                    L[j] = L[j+1];
                    L[j+1] = tem;
                    time+=1;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", time);
        time = 0;
    }
}