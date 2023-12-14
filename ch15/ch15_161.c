#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include<stdbool.h>

bool rangePerfectSquare(int left, int right, int target) {
    right = target/2;
    bool isPerfect = 0;
    if(left>=right){
        if(left*left!=target){
            return 0;
        }
    }
    if(left*left!=target){
        return rangePerfectSquare(left+1, right, target);
    }else{
        return 1;
    }
}

int main() {
    int a;
    scanf("%d", &a);
    bool ans = rangePerfectSquare(1, INT_MAX, a);
    if (ans) {
        printf("true");
    }
    else {
        printf("false");
    }
    printf("\n");
    return 0;
}
