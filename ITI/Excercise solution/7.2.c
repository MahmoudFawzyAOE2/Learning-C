#include <stdio.h>
typedef struct
    {
        char id_num[5];
        char name [10];
        char gender;
        int age;
    } student;

student get_student ();
void print_student (student_n);
void bubble_sort_array_student (student arr[], int size);

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

    bubble_sort_array_student(students_array, number_of_students);


    for (i=0;i<number_of_students;i++)
    {
        printf("\n***** Student [%d] ***** ",i+1);
        print_student(students_array[i]);
    }

}


student get_student ()
{
    student temp_student;
    printf("\n**************************************");

    printf("\nEnter Student Code: ");
    scanf("%s",&temp_student.id_num);

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
    printf("\nStudent Code: %s",student_n.id_num);
    printf("\nStudent Name: %s",student_n.name);
    printf("\nStudent Gender: %c",student_n.gender);
    printf("\nStudent Age: %d\n",student_n.age);
}

void bubble_sort_array_student (student arr[], int size)
{
    int i, flag = 0 ;
    do
    {
        flag = 0 ;
        for (i=0;i<size-1;i++)
        {
            if (strcmp(arr[i].name, arr[i + 1].name) > 0)
            {
            student temp ;
            temp = arr[i];
            arr[i] =arr[i+1];
            arr[i+1] = temp;
            flag = 1 ;
            }
        }

    } while (flag) ;
}
