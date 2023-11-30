#include<stdio.h>

typedef struct matrix {
    int row, col;
    int* data;
} *MATRIX;

int main(){
    MATRIX a;
    MATRIX *A = a;
    MATRIX b;
    MATRIX B = b;
    scanf("%d%d", &a->row, &a->col);
    int suma = (a->col)*(a->row);
    for(int i = 0; i < suma; i++){
        scanf("%d", a->data);
        a->data+=1;
    }
    scanf("%d%d", &b->row, &b->col);
    int sumb = (b->col)*(b->row);
    for(int i = 0; i < sumb; i++){
        scanf("%d", b->data);
        b->data+=1;
    }
    if(suma!=sumb){
        printf("不可相加");
    }else{
        for(int i = 0; i < suma; i++){
            A.
        }
    }

}