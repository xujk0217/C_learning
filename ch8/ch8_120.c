#include "ID_Check.h"

void ID_Check(char ID[]) {
    for(int i = 1; i <9; i++){
        ID[i]*= 9-i;
    }
    int firsteg;
    firsteg = (int)ID[0] - 55;
    firsteg = firsteg/10 + (firsteg%10)*9;
    for(int i = 1; i < 10; i++){
        firsteg+=i;
    }
    if(firsteg/10==0){
        printf("real");
    }else{
        printf("fake");
    }
}