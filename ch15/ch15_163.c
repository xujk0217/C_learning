#include <stdio.h>
 
int lcs(int* text1, int* text2, int m, int n) {
    int nown, nowm;
    for(int i = m-1; i >=0; i--){
        for(int j = n - 1; j >=0; j--){
            if(text1[i] == text2[j]){
                return 1+lcs(text1, text2, i, j);
            }
        }
    }
    return 0;
}
void int_to_array(int* array1, int value, int index) {
    for(int i = index-1; i >= 0; i--){
        array1[i] = value%10;
        value/=10;
    }
}
 
int main() {
    int ans = 0;
    int text1[100] = { 0 };
    int text2[100] = { 0 };
    int t1, t2, m, n;
 
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &t1);
    scanf("%d", &t2);
 
    int_to_array(text1, t1, m);
    int_to_array(text2, t2, n);
    ans = lcs(text1, text2, m, n);
    printf("%d", ans);
    return 0;
}