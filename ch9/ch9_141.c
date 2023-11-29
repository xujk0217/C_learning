#include <stdio.h>
#include <stdlib.h>

int extractMax(int* stone, int stoneSize) {
    // add your code /
}
 
void insert(int* stone, int stoneSize, int value) {
    // add your code /
}
 
int lastStoneWeight(int* stones, int stonesSize) {
    while(1){
        
    }
} 

int main() {
    int n = 0;
    int ans;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    ans = lastStoneWeight(a, n);
    printf("%d", ans);
    free(a);
    return 0;
}