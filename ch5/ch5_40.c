#include <stdio.h>
int main(){
    int a, b, ans;
    scanf("%d%d", &a, &b);
    
    for(int i =1; i<=a; i++){
        if (a%i == 0){
            if (b%i == 0){
                if (i!=1){
                    printf(" ");
                }
                printf("%d", i);
                ans = i;
            }
        }
    }
    printf("\n%d", ans);
}