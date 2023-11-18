#include <stdio.h>

int main(){
    int a;
    int ans = 0;
    scanf("%d", &a);
    
    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=i; j++){
            ans+=j;
        }
    }
    printf("%d", ans);
}