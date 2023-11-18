#include<stdio.h>
int main(){
    int firstnumber, secondnumber;
    int single_plus;
    int carry = 0;
    int first_single_number[10], second_single_number[10];
    for(int i=1; i<100; i++){
        scanf("%d %d", &firstnumber, &secondnumber);
        if(firstnumber==0&&secondnumber==0){
            break;
        }else{
            for(int i = 0; i<10; i++){
                first_single_number[i] = firstnumber%10;
                firstnumber/=10;
            }
            for(int i = 0; i<10; i++){
                second_single_number[i] = secondnumber%10;
                secondnumber/=10;
            }
            for(int i = 0; i<10; i++){
                single_plus=first_single_number[i]+second_single_number[i];
                if(single_plus >= 10){
                    carry+=1;
                    first_single_number[i+1]+=1;
                }
            }
        }
        if(carry == 0){
            printf("No carry operation.");
        }else if(carry == 1){
            printf("%d carry operation.", carry);
        }else{
            printf("%d carry operations.", carry);
        }
        printf("\n");
        carry=0;
    }
}