#include<stdio.h>
#include<assert.h>

/* iteration 迭代
int fib(int i){
    int m = 0;
    int n = 1, k;
    for(int j = 2; j <= i; j++){
        k = n + m;
        m = n;
        n = k;
    }
    return k;
}
*/

// Recursion
int fib(int i){
    if(i == 0 ||i == 1){
        return i;
    }
    return fib(i-1) + fib(i-2);
}


int main(){
    int n;
    scanf("%d", &n); 
    assert(n > 0);
    printf("fib(%d) = %d\n", n, fib(n));
}