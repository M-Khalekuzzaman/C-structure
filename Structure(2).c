
#include<stdio.h>
//global structure
struct Student{

 int age;
 double salary;
 int roll;
 char name[50];

};
int main()
{
    struct Student student1,student2;   //local variable

     printf("Information for student-1: \n");
     printf("Enter student age : ");
     scanf("%d",&student1.age);
    printf("Enter student salary :");
    scanf("%lf",&student1.salary);
    printf("Enter student roll : ");
    scanf("%d",&student1.roll);
    printf("Enter student name : ");
    scanf( "%s",&student1.name);

    printf("Name : %s\n",student1.name);
    printf("Age : %d\n",student1.age);
    printf("Salary : %.2lf\n",student1.salary);
    printf("Roll : %d\n",student1.roll);


    getch();
}
