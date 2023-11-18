#include <stdio.h> //for print
#include <string.h> //for string
#define _CRT_SWCURE_NO_WARNINGS //for input

int main(){

/*//print 
    printf("hello world\n");
    int a = 878;
    int b = 89;
    int c = a+b;
    printf("%d",c);
*/

/*//var setting
   int afds;
   char text[10] = "apple";
   float ss = 7.4;
   printf("%s\t%f", text, ss);
   strcpy(text, "i apple");
   printf("%s", text);
   scanf("%d", &afds);
   printf("%d", afds);
*/

/*//input
   int i, j, temp;

   scanf("%d%d", &i, &j);
   printf("%d\t%d\n", i, j);
   
   temp = i;
   i = j;
   j = temp;
   
   printf("%d\t%d", i, j);
*/
    int i, j, k;
    scanf("%d%d%d", &i, &j, &k);
    k = j = i;
    printf("%d\t%d\t%d\n", i, j, k);
    k %= 3;
    printf("%d", k);



   //Note:
   //printf = print
   //%d for int
   //%c for single char
   //%s for char
   //%f for float
   //scanf is input
   //\t = tab, \n = change line
   //strcpy can change var
}
