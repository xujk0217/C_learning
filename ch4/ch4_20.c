#include <stdio.h>

int main()
{
    /*
    char enle[26] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
    int pase;
    char pm, firstle;
    int firstplace, secplace;
    scanf("%c%d%c", &pm, &pase, &firstle);
    for (int i = 0; i<26; i++){
        if (firstle == enle[i]){
            firstplace = i;
        }
    }
    if (pm == "+"){
        secplace = firstplace + pase;
    }else{
        secplace = firstplace - pase;
    }
    printf("%d", enle[secplace]);


    char charr;
   scanf("%c", &charr);
   printf("%d", int(charr));
    */

    char input[3];
    int Asciicod;
    scanf("%s", input);
    if (input[0] == '+'){
        Asciicod = (int)input[2];
        Asciicod += (int)input[1] - 48;
        Asciicod -= 65;
        Asciicod %= 26;
        Asciicod += 65;
    }
    else{
        Asciicod = (int)input[2];
        Asciicod-=(int)input[1] - 48;
        Asciicod-=65;
        Asciicod%=26;
        Asciicod < 0 ? Asciicod += 26: Asciicod;
        Asciicod+=65;
    }
    //printf("%d\n", (int)'A');
    printf("%c\n", (char)Asciicod);
}