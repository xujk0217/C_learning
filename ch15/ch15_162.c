#include<stdio.h>
#include<stdlib.h>

void permute(int* a, int l, int r, int n) {
    for(int i = l ; i <= r ; i++)
    {
        int temp = a[i];
        a[i] = a[l];
        a[l] = temp;
        if(l == r)
        {
            for(int j = 0 ; j < n ; j++)
            {
                printf("%d ",a[j]);
            }
            printf("\n");
        }
        permute(a, l+1, r, n);
        temp = a[i];
        a[i] = a[l];
        a[l] = temp;
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    permute(a, 0, n - 1, n);
    free(a);
    return 0;
}