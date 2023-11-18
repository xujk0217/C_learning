#include "ASCII.h"
char ascii(char sign, int num, char msg) {
    int msgnum = (int)msg;
    if(sign == '+'){
        msgnum += num;
        msgnum -= 65;
        msgnum %= 26;
        msgnum += 65;
    }else{
        msgnum -= num;
        msgnum -=65;
        msgnum < 0 ? msgnum += 26 : msgnum;
        //msgnum%=26;
        msgnum+=65;
    }
    return (char)msgnum;

}