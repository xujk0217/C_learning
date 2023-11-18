#include <stdio.h>
int main(){
    char input;
    scanf(" %c", &input);
    switch(input){
        case 'a': case'A':
            printf("the first.");
            break;
        case 'b': case'B':
            printf("AC");
            break;
        case 'C': case'c':
            printf("BD");
            break;
        case 'D': case'd':
            printf("CE");
            break;
        case 'E': case'e':
            printf("DF");
            break;
        case 'F': case'f':
            printf("EG");
            break;
        case 'G': case'g':
            printf("FH");
            break;
        case 'H': case'h':
            printf("GI");
            break;
        case 'I': case'i':
            printf("HJ");
            break;
        case 'J': case'j':
            printf("IK");
            break;
        case 'K': case'k':
            printf("JL");
            break;
        case 'L': case'l':
            printf("KM");
            break;
        case 'M': case'm':
            printf("LN");
            break;
        case 'N': case'n':
            printf("MO");
            break;
        case 'O': case'o':
            printf("NP");
            break;
        case 'P': case'p':
            printf("OQ");
            break;
        case 'Q': case'q':
            printf("PR");
            break;
        case 'R': case'r':
            printf("QS");
            break;
        case 'S': case's':
            printf("RT");
            break;
        case 't': case'T':
            printf("SU");
            break;
        case 'U': case'u':
            printf("TV");
            break;
        case 'V': case'v':
            printf("UW");
            break;
        case 'W': case'w':
            printf("VX");
            break;
        case 'X': case'x':
            printf("WY");
            break;
        case 'Y': case'y':
            printf("XZ");
            break;
        case 'Z': case'z':
            printf("the last.");
            break;
        default:
            printf("not English.");
            break;
    }
}