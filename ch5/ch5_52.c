#include<stdio.h>
int main(){
    char eng[1000] = {'l'};
    scanf("%s", eng); 
    int count_mother = 0;
    for(int i = 0; i < 1000; i++){
        if(eng[i] == 'a'){
            count_mother+=1;
        }
        if(eng[i] == 'e'){
            count_mother+=1;
        }
        if(eng[i] == 'i'){
            count_mother+=1;
        }
        if(eng[i] == 'o'){
            count_mother+=1;
        }
        if(eng[i] == 'u'){
            count_mother+=1;
        }
        if(eng[i] == 'A'){
            count_mother+=1;
        }
        if(eng[i] == 'E'){
            count_mother+=1;
        }
        if(eng[i] == 'I'){
            count_mother+=1;
        }
        if(eng[i] == 'O'){
            count_mother+=1;
        }
        if(eng[i] == 'U'){
            count_mother+=1;
        }
    }
    /*
    for (int i = 0; i<20; i++){
        printf("%c ", eng[i]);
    }
    printf("\n");
    */
    printf("%d\n", count_mother);
    count_mother = 0;
}