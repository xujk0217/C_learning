#include<stdio.h>
#include<assert.h>
#include<string.h>

// T a i w a n \0

int myStrlen(char string[]){
    if(strcmp(string, "\0") == 0){ // if(string[0] == '\0){
        return 0;
    }
    return 1 + myStrlen(&string[1]);   //      return 1 + myStrlen(string + 1);
}

int main(){
    char string[128] = "Taiwan";          //string[127] + \0
    printf("length of %s = %d\n", string, myStrlen(string));
}