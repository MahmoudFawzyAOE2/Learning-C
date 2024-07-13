#include <stdio.h>
typedef struct
    {
        char roll_no[5];
        char name [10];
        int age;
    } student;

student get_student ();
void print_student (student_n);
void stname_less_age (student students_array[], unsigned int number_of_students);
void stname_has_rollno (student students_array[], unsigned int number_of_students);

void main(void)
{
    unsigned int number_of_students;
    student students_array[100];

    printf("\nEnter number of students: ");
    scanf("%d",&number_of_students);

    int i;
    for (i=0;i<number_of_students;i++)
    {
        printf("\n***** Enter Data for Student [%d] ***** ",i+1);
        students_array[i] = get_student();
    }

    stname_less_age (students_array, number_of_students);
    stname_has_rollno (students_array, number_of_students);
}

student get_student ()
{
    student temp_student;
    printf("\n**************************************");
    fflush(stdin);
    printf("\nEnter Student Code: ");
    gets(temp_student.roll_no);

    printf("Enter Student Name: " );
    scanf("%s",&temp_student.name);
    fflush(stdin);

    printf("Enter Student Age: ");
    scanf("%d",&temp_student.age);

    return temp_student;
}

void print_student (student student_n)
{
    printf("\n**************************");
    printf("\nStudent Roll no: [%s]",student_n.roll_no);
    printf("\nStudent Name: %s",student_n.name);
    printf("\nStudent Age: %d\n",student_n.age);
}

void stname_less_age (student students_array[], unsigned int number_of_students)
{
    int age ,i;
    printf("\n\nEnter Age to display student names below it: ");
    scanf("%d",&age);

    printf("*** students below age %d ***", age);
    printf("\n ***************************");

    for (i=0;i<number_of_students;i++)
    {
        if (students_array[i].age < age)
            printf("\nStudent Name: %s",students_array[i].name);
    }
    printf("\n");
}

void stname_has_rollno (student students_array[], unsigned int number_of_students)
{
    int i;

    printf("\n*** students who has a roll no ***");
    printf("\n**********************************");

    for (i=0;i<number_of_students;i++)
    {
        if (students_array[i].roll_no[0] != '\0')
            printf("\nStudent Name: %s",students_array[i].name);
    }
    printf("\n");
}
