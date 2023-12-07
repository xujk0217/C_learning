#include <stdio.h>
#include <assert.h>


int gcd(int i, int j){
    printf("gck(%d, %d) = ", i, j);
    int k = i % j;
    if(k == 0){
        return j;
    }
    return gcd(j, k);
}

int main(){
    int i = 82, j = 24;
    assert(i >= j && j > 0);
    printf("%d\n", gcd(i, j));
}