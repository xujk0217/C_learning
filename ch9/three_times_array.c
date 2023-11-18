#include <stdio.h>

int main(){
    int a[2][3][4];


///   o u o    ///
    int *intPtr = a[0][0];
/*  
    a[0][0][i]
  { [0]0 0 0 }  0 0 0 0 
     0 0 0 0    0 0 0 0
     0 0 0 0    0 0 0 0
*/

 
    int(*arrayPtr)[4] = a[0];

/* 
    a[0][i][0]    a[1][][]
  {[(0) 0 0 0 ]    0 0 0 0 
     0  0 0 0      0 0 0 0
     0  0 0 0  }   0 0 0 0
*/
 

    int(*matrixPtr)[3][4] = a;

/* 
    a[i][0][0]
  {[(0) 0 0 0      0 0 0 0 
     0  0 0 0      0 0 0 0
     0  0 0 0 ]    0 0 0 0 }
*/



    //intPtr = &a[0][0][3];

    printf("%p\n", intPtr);
    intPtr++;
    printf("%p\n", intPtr);

}