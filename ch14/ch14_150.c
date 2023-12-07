#include<stdio.h>

typedef struct point_t point_t;
struct point_t {
    double x;
    double y;
};

int main(){
    point_t test;
    scanf("%lf%lf", &test.x, &test.y);
    if(test.x > 0){
        if(test.y > 0){
            printf("第一象限");
        }else{
            printf("第四象限");
        }
    }else{
        if(test.y > 0){
            printf("第二象限");
        }else{
            printf("第三象限");
        }
    }
}