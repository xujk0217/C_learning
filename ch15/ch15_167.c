#include <stdio.h>

int f(int n) {
    int sum = 0;
    if(n < 10){
        return n;
    }else{
        while(n!=0){
            sum+=n%10;
            n/=10;
        }
        return f(sum); 
    }
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));    
    return 0;
 
}