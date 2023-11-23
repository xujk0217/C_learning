#include <stdio.h>
#include <stddef.h>
#include <string.h>
//typedef, structure with pointer
//unsigned int ==> 0 and +int

struct student    
    {
        char name[20];                     //      20     大小
        int id;                            //       4
        char phone[14];                    //      14 (+2)
        float grade[4];                    //      16
        int birth_year, birth_month, birth_day;//  12
    };
typedef struct student Student; // struct student == Student
typedef int i;

// typedef 另一種寫法 ==> 

typedef struct teacher
{
    char name[20];
    int age;
    char subject[10];
    int class;
} teacher_t;       //_type



int main(){
    i price = 10;
    printf("%d\n", price);
    struct student john;   
    Student Amy;          // struct student == Student
    struct student *ptr = &john;
    int i;
    int *iptr = &i;

    strcpy(john.name, "John Smith");
    (*ptr).id = 12345;
    strcpy((*ptr).phone, "0987654332");
    (*ptr).grade[0] = 2.0;
    john.grade[1] = 2.2;
    ptr->grade[1] = 4.3;  // == (ptr->grade)[1] = 4.3;
    printf("%.1f", john.grade[1]);

}