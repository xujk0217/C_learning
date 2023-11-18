#include <stdio.h>
int main(){
    int a, x=0;
    int in, insum=0;
    scanf("%d", &a);
    for (int i = 2; i < a; i++){
        for (int j = 1; j<i; j++){
            if (i%j==0){
                in = j;
                insum += in;
                //printf("11\n");
            }
        }
        //printf("%d\t%d\n", insum, i);
        if (insum == i){
            //printf("ddd");
            if (x!=0){
                printf(" ");
            }
            printf("%d", i);
            x+=1;
            //printf("%d", x);
        }
        insum = 0;
    }
}