#include "lcm.h"
int lcm(int a, int b) {
    int tem;
    int minexist = 0;
    int lcmnum;
    if(a>b){
        tem = a;
        a = b;
        b = tem;
    }
    lcmnum = b-1;
    while(minexist == 0){
        lcmnum+=1;
        if(lcmnum % a == 0 && lcmnum % b == 0){
            minexist = 1;
        }
    }
    return lcmnum;
}