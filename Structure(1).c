//structure is a collection of variables of different data type under a single name;
//structure is a user defined data type c/c++;

#include<stdio.h>
struct Student{

 int age;
 float salary;
 double roll;

};
int main()
{
    struct Student student1,student2;

    student1.age =  21 ;
    student1.salary = 12506.76;
    student1.roll = 1910979158;


    printf("Age : %d\n",student1.age);
    printf("Salary : %.2f\n",student1.salary);
    printf("Roll : %.1lf\n",student1.roll);





    getch();
}
