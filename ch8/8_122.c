#include<stdio.h>

int main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int nums1[4], nums2[4];
    for(int i = 0; i < 4; i++){
        nums1[i] = num1%10;
        num1/=10;
    }
    for(int i = 0; i < 4; i++){
        nums2[i] = num2%10;
        num2/=10;
    }
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < 4; i++){
        if(nums1[i] == nums2[i]){
            a+=1;
        }
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(nums1[i] == nums2[j]&&i != j){
                b+=1;
                break;
            }
        }
    }


    int isisolate = 1;
    for(int i = 0; i < 4; i++){
        isisolate = 1;
        for(int j = 0; j < 4; j++){
            if(nums1[i] == nums2[j]){
                isisolate = 0;
                break;
            }
        }
        if(isisolate == 1){
            c+=1;
        }
    }
    for(int i = 0; i < 4; i++){
        isisolate = 1;
        for(int j = 0; j < 4; j++){
            if(nums1[j] == nums2[i]){
                isisolate = 0;
                break;
            }
        }
        if(isisolate == 1){
            c+=1;
        }
    }
    printf("%dA%dB%dC", a, b, c);
}