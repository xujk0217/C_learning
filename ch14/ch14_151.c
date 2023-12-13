#include <stdio.h>
#include <string.h>

struct Student
{
    char studentName[20];
    int score;
};

int main(){
    struct Student a, b, c;
    scanf("%s %d", a.studentName, &a.score);
    scanf("%s %d", b.studentName, &b.score);
    scanf("%s %d", c.studentName, &c.score);
    printf("avg = %d\n", (a.score+b.score+c.score)/3);
    //char maxx[20] = a.studentName;
    int maxscore = a.score;
    for(int i = 0; i < 2; i++){
        if(i == 0){
            if(maxscore<b.score){
                maxscore = b.score;
                //maxx[20] = b.studentName;
            }
        }
        if(i == 1){
            if(maxscore<c.score){
                maxscore = c.score;
                //maxx[20] = c.studentName;
            }
        }
    }
    if(maxscore == a.score){
        printf("max = %s", a.studentName);
    }
    if(maxscore == b.score){
        printf("max = %s", b.studentName);
    }
    if(maxscore == c.score){
        printf("max = %s", c.studentName);
    }
    
}