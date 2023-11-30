#include <stdio.h>
//find bits binary of value with struct and pointer

typedef struct number{
    int value;
    int bit;
} Number;

typedef struct nemberSet{
    Number numbers[1000];
    int count;
} NumberSet ;

void numberBit(Number *ptr){            //# of bits binary of value
    int n = ptr->value;
    int bit = 0;
    for(int i = 0; i < sizeof(int) * 8; i++){
        if((n & 1) == 1){
            bit+=1;
        }
        n = n >> 1;//n >>= 1;
    }
    ptr->bit = bit;
}
int numberBitcallValue(int n){
    int bit = 0;
    for(int i = 0; i < sizeof(int) *8; i++){
        if((n & 1) == 1){
            bit++;
        }
        n >>= 1;
    }
    return bit;
}

void readNumberComputeOnes(NumberSet *numberset){
    int input[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    numberset->count = 0;
    Number *ptr = numberset->numbers;
    for(int i = 0; i < 15; i++){
        ptr->value = input[i];
        ptr->bit = numberBitcallValue(ptr->value);
        //numberBit(ptr);
        ptr++;
        numberset->count++;
    }
    //while(scanf("%d", &(numberset->numbers[numberset->count].value))!= EOF){
    /*while(scanf("%d", &(ptr->value))!=EOF){
        ptr++;
        numberset->count++;
    }
    */
}
void printNumberSet(NumberSet *numberset){
    for(int i = 0; i < 15; i++){
        printf("%d ", numberset->numbers[i].value);
    }
    printf("\n");
    for(int i = 0; i < 15; i++){
        printf("%d ", numberset->numbers[i].bit);
        if(i>=8){
            printf(" ");
        }
    }
}

int main(){
    NumberSet numberset;
    readNumberComputeOnes(&numberset);
    printNumberSet(&numberset);
}