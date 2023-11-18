#include<stdio.h>

int main(){
    int input;
    int rock[98]={0};
    int timeOfRock = 0;
    while(scanf("%d", &input)!= EOF){
        rock[timeOfRock] = input;
        timeOfRock+=1;
    }
    for(int i =0; i < 97; i++){
        for(int j = 0; j < 97 - i; j++){
            if(rock[j] > rock[j+1]){
                int tem;
                tem = rock[j];
                rock[j] = rock[j+1];
                rock[j+1] = tem;
            }
        }
    }
    int time;
    for(int i = 0; i < 98; i+=3){
        if(rock[i] == rock[i+1] && rock[i] == rock[i+2]){
            continue;
        }else{
            printf("%d", rock[i]);
            break;
        }
    }
}