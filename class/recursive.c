#include<stdio.h>
#include<assert.h>
#include<stdbool.h>

//answer whether i a natural number

// 1 is a natural number.
//if k is a natural number, k+1 is a natural nubmer.

bool natural(int i){
    if( i == 3){
        printf("start debug here!!");
    }

    if(i == 1){                                //停止條件
        printf("1 is a natrual number.\n");
        return true;
    }else{
        printf("Is %d a natrual number?\n", i);
        if(natural(i-1) == true){              //迴圈呼叫🤨
            printf("%d is a natrual number,so %d is a natural number.\n", i-1, i);
            return true;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int n = 3;
    assert(n > 0);
    if(natural(n) == 1){
        printf("true\n");
    }else{
        printf("false\n");
    }
    
}