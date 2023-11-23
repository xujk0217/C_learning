#include <stdio.h>

struct student
    {
        char name[20];                     //      20
        int id;                            //       4
        char phone[14];                    //      14 (+2)
        float grade[4];                    //      16
        int birth_year, birth_month, birth_day;//  12
    };

int main(){
    struct student john = {"John Smith", 910351, "0970332000", {97, 87, 90, 89}, };

    printf("%lu\n", sizeof(john));
    printf("%lu\n", sizeof(struct student));
    
}