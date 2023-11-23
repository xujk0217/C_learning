#include <stdio.h>
#include <stddef.h>
#include <string.h>
// struct learning
struct student    
    {
        char name[20];                         //  20         檔案大小
        int id;                                //  04  
        char phone[14];                        //  14 (+2)    要到 4 的倍數  alignment
        float grade[4];                        //  16
        int birth_year, birth_month, birth_day;//  12
    };

int main(){
    struct student john = {"John Smith", 910351, "886-970332000", {97, 87, 90, 89}, 2004, 11, 23};
    john.id = 232333;

    printf("name : %s\n", john.name);
    printf("id : %d\n", john.id);
    printf("phone_number : %s\n", john.phone);
    printf("grade : ");
    for(int i = 0; i < 4; i++){
        printf("%.0f", john.grade[i]);
        if(i!=3){
            printf(", ");
        }
    }

    printf("\n");
    printf("birthday : %d/%d/%d\n", john.birth_year, john.birth_month, john.birth_day);

    printf("\njohn's size : %lu\n", sizeof(john));
    printf("student's size : %lu\n", sizeof(struct student));
    

    printf("start to id : %lu\n", offsetof(struct student, id));
    printf("start to grade : %lu\n", offsetof(struct student, grade));


    strcpy(john.name, "john happy");
    printf("john's new name : %s\n", john.name);   
    john.id = 3232323;
    printf("john's new id : %d\n", john.id); 


}