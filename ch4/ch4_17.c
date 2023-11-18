#include <stdio.h>


int main(){
    int tri[3];
    scanf("%d%d%d", &tri[0], &tri[1], &tri[2]);
    int max = 0, min = tri[2], mid;
    int n;
    int maxi, mini;
    for (int i = 0; i < 3; i++){
        if (tri[i] > max){
            max = tri[i];
            maxi = i;
        }
        if(tri[i] < min){
            min = tri[i];
            mini = i;
        }
    }
    for (int i = 0; i<3; i++){
        if (i != maxi && i != mini){
            mid = tri[i];
        }
    }

    if (max >= min + mid){
        printf("not a triangle");
    }else if(max == mid && mid == min){
        printf("regular triangle");
    }else if(max*max == mid*mid + min*min){
        printf("rectangular triangle");
    }else if(max*max > mid*mid + min*min && (mid == min||max == mid)){
        printf("isosceles obtuse triangle");
    }else if(max*max < mid*mid + min*min && (mid == min||max == mid)){
        printf("isosceles acute triangle");
    }else if(max*max > mid*mid + min*min){
        printf("obtuse triangle");
    }else if(max*max < mid*mid + min*min){
        printf("acute triangle");
    }

}