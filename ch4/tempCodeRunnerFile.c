#include <stdio.h>


int main(){
    int m,n;
    scanf("%d%d", &m, &n);
    int om, sm, tm, fm;
    int on, sn, tn, fn;

    om = m/1000;
    m -= (om*1000);
    sm = m/100;
    m -= sm*100;
    tm = m/10;
    fm = m - tm*10;

    on = n/1000;
    n -= (on*1000);
    sn = n/100;
    n -= sn*100;
    tn = n/10;
    fn = n - tn*10;

    int a, b;
    int mm[4];
    int nn[4];
    mm[0] = om;
    mm[1] = sm;
    mm[2] = tm;
    mm[3] = fm;

    nn[0] = on;
    nn[1] = sn;
    nn[2] = tn;
    nn[3] = fn;

    a = 0;
    b = 0;

    for(int i=1 ; i <= 4; i++){
        if (nn[i] == mm[i]){
            a += 1;
        }
    } 
    for(int i=1; i<=4; i++){
        for (int j=1; j<=4; j++){
            if (i!=j){
                if (nn[i]==mm[j]){
                    b += 1 ;
                }
            }
        }
    }

    printf("%dA%dB", a, b);

}