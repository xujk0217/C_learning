#include <stdio.h>
#include <stdlib.h>
 
int GCD(int t, int v) {
    if(v>t){
        int tem = v;
        v = t;
        t = tem;
    }
    int m = t%v;
    if(m == 0){
        return v;
    }else{
        return GCD(v, m);
    }
    
}
 
int main() {
    int a, b;
 
    scanf("%d", &a);
    scanf("%d", &b);
    int temp;
 
    if (b > a) {
        temp = a;
        a = b;
        b = temp;
    }
    printf("%d\n", GCD(a, b));
    return 0;
}