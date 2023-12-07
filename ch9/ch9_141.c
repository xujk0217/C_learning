#include <stdio.h>
#include <stdlib.h>

int extractMax(int *stone, int stoneSize)
{
    int max = 0;
    int maxi = 0;
    for(int i = 0; i < stoneSize; i++){
        if(stone[i] > max){
            max = stone[i];
            maxi = i;
        }
    }
    stone[maxi] = 0;
    return max;
}

void insert(int *stone, int stoneSize, int value)
{
    // add your code /
}

int lastStoneWeight(int *stones, int stonesSize)
{
    while (1)
    {
        int maxy = 0;
        int maxx = 0;
        maxy = extractMax(stones, stonesSize);
        maxx = extractMax(stones, stonesSize);
        if(maxx == 0){
            return maxy;
        }
        if (maxx != maxy)
        {
            int y = maxy - maxx;
            for(int i = 0; i < stonesSize; i++){
                if(stones[i] == 0){
                    stones[i] = y;
                    break;
                }
            }
        }
    }
}

int main()
{
    int n = 0;
    int ans;
    scanf("%d", &n);
    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    ans = lastStoneWeight(a, n);
    printf("%d", ans);
    free(a);
    return 0;
}