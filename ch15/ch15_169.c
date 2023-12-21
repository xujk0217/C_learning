#include <stdio.h>
 
int fibr(int n) {
    if(n == 1||n == 0){
        return 1;
    }else{
        return fibr(n-1)+fibr(n-2);
    }
}
 
int main() {
 int n;
 scanf("%d", &n);
 printf("%d", fibr(n));
 
}