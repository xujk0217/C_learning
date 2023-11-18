#include<stdio.h>

int main(){
    int input;
    scanf("%d", &input);

    int x;
    int time = 1;
    int oddsum = 0, evensum = 0;

    while(input!=0){
        if(time%2 == 1){
            x = input%10;
            input = input/10;
            oddsum+=x;
        }else if(time%2 == 0){
            x = input%10;
            input = input/10;
            evensum+=x;
            //printf("%d\n%d\n", x, evensum);
        }
        time+=1;
    }
    int ans ;
    ans = oddsum - evensum;
    if(ans<0){
        ans = -ans;
    }
    printf("%d", ans);
}