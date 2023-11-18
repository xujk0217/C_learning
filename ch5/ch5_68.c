#include<stdio.h>

int main(){
    double a;
    double key, house;
    scanf("%lf", &a);
    for(int i = 0; i < a; i++){
        scanf("%lf%lf", &key, &house);
        printf("%.0lf", ((house-1)+(house-key))*key/2);
        if(i != a-1){
            printf("\n");
        }
    }
}