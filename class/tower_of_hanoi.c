#include <stdio.h>
#include<assert.h>
#include<string.h>

int hanoi(int n, char src, char aur, char dst){
    if(n == 1){
        printf("%c -> %c\n", src, dst);
        return 1;
    }else{
        int count = hanoi(n-1, src, dst, aur);
        printf("%c -> %c\n", src, dst);
        hanoi(n-1, aur, src, dst);
        return 2 * count + 1;
    }
}

int main(){
    int n ;
    scanf("%d", &n);
    assert(n > 1);
    printf("count = %d times\n", hanoi(n, 'A', 'B', 'C'));
}