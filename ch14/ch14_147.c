#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

typedef struct List{
    int num;
    int mod;
    int Even_Odd;
}List;

void swap(List*a, List*b){
    List temp = *a;
    *a = *b;
    *b = temp;
}

bool compare(List *a, List *b){
    if(a->mod>b->mod){
        return true;
    }else if(a->mod == b->mod){
        if(a->Even_Odd == 0 && b->Even_Odd == 1){
            return true;
        }else if(a->Even_Odd == 1 &&b->Even_Odd == 1){
            if(a->num<b->num){
                return true;
            }
        }else if(a->Even_Odd ==0 && b->Even_Odd == 0){
            if(a->num>b->num){
                return true;
            }
        }
    }
    return false;
}

void sort(List *array, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-1; j++){
            if(compare(&array[j], &array[j+1])){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

int main(){
    while(1){
        int n, m;
        scanf("%d%d", &n, &m);
        List *array = (List *)malloc(sizeof(List) * n);
        if(n == 0 && m == 0){
            break;
        }
        for(int i = 0; i < n; i++){
            scanf("%d", &array[i].num);
            array[i].mod = array[i].num % m;
            if(array[i].num % 2 != 0){
                array[i].Even_Odd = 1;
            }else{
                array[i].Even_Odd = 0;
            }
        }
        sort(array, n);
        printf("%d %d\n", n, m);
        for(int i = 0; i < n; i++){
            printf("%d\n", array[i].num);
        }
        free(array);
    }
    printf("0 0");
}