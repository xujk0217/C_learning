#include <stdio.h>
#include<assert.h>
#include<string.h>

void hanoi(int n, char src, char aur, char dst){
    if(n == 1){
        printf("%c -> %c\n", src, dst);
    }else{
        hanoi(n-1, src, dst, aur);
        printf("%c -> %c\n", src, dst);
        hanoi(n-1, aur, src, dst);
    }
}

int main(){
    int n ;
    scanf("%d", &n);
    assert(n > 1);
    hanoi(n, 'A', 'B', 'C');
}