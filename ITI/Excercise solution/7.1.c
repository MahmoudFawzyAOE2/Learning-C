#include <stdio.h>
typedef struct
    {
        unsigned int code;
        char name [50];
        char gender;
        unsigned int age;
    } student;

student get_student ();
void print_student (student_n);

void main(void)
{
    student student_1, student_2;

    student_1 = get_student();
    student_2 = get_student();

    printf("\nData of the eldest student");
    if (student_1.age > student_2.age)
        print_student(student_1);
    else
        print_student(student_2);
}


student get_student ()
{
    student temp_student;
    printf("\n**************************");

    printf("\nEnter Student Code: ");
    scanf("%d",&temp_student.code);

    printf("Enter Student Name: " );
    scanf("%s",&temp_student.name);
    fflush(stdin);
    printf("Enter Student Gender: ");
    scanf("%c",&temp_student.gender);
    fflush(stdin);
    printf("Enter Student Age: ");
    scanf("%d",&temp_student.age);

    return temp_student;
}

void print_student (student student_n)
{
    printf("\n**************************");
    printf("\nStudent Code: %d",student_n.code);
    printf("\nStudent Name: %s",student_n.name);
    printf("\nStudent Gender: %c",student_n.gender);
    printf("\nStudent Age: %d",student_n.age);
};
