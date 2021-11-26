//Array of structure;
#include<stdio.h>
struct Person{
char name[50];
int roll;
float cgpa;

};
int main()
{
    struct Person student[3];
    int i;
    for(i = 0 ; i<3 ; i++)
    {
        printf("Enter information for student-%d : \n",i+1);
        printf("Enter student name : ");
        fflush(stdin);
        gets(student[i].name);
        printf("Enter student roll : ");
        scanf("%d",&student[i].roll);
        printf("Enter student cgpa : ");
        scanf("%f",&student[i].cgpa);
        printf("\n");
    }
    for(i = 0 ; i<3 ; i++)
    {
        printf("Information of student-%d : \n",i+1);
        printf("student name : %s\n",student[i].name);
        printf("student roll : %d\n",student[i].roll);
        printf("student cgpa : %f\n",student[i].cgpa);
        printf("\n");
    }
    getch();
}
