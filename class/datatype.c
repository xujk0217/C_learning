#include<stdio.h>
#define PI 3.141592653589793

void applePlus(){
    static int apple = 0;  //靜態變數  -->  保留數值在 function 中 (第二次後進入後不再初始化)
    apple+=1;
    printf("manyApple = %d\n", apple);
}

int main(){
    for(int i = 0; i < 5; i++){
        applePlus();
    }

    short int i;
    printf("%lu\n", sizeof(short));
    printf("%lu\n", sizeof(short int));         //2
    printf("%lu\n", sizeof(long));              //2
    printf("%lu\n", sizeof(long long));         //8
    printf("%lu\n", sizeof(long int));          //8
    printf("%lu\n", sizeof(long long int));     //8
    printf("%lu\n", sizeof(unsigned int));      //4
    printf("%lu\n", sizeof(unsigned char));     //1

    double radius = 3;
    const double pi = 3.141592653589793; //佔記憶體
    //pi = 3;  can't change const number
    printf("%f", 2 * pi * radius);

}