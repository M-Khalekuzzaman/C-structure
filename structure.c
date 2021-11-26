#include<stdio.h>
struct Student {
char name[50];
int roll;
double sub1,sub2;
double total;

};
int main()
{
    FILE *file;
    file = fopen("Student-details.txt","a");
    if(file == NULL)
        printf("File does not exist");
    else
    {
        printf("File is opened\n");
        int num;
       printf("Enter your number of student info. :");
       scanf("%d",&num);
       struct Student student[num];
       for(int i = 0 ; i<num ; i++)
           {
               printf("Student-[%d]: \n",i+1);
               printf("Enter student name : ");
               fflush(stdin);
               scanf("%s",&student[i].name);
               //gets(student[i].name);
               printf("Enter student roll : ");
               scanf("%d",&student[i].roll);
               printf("Enter student sub1 & sub2 marks : ");
               scanf("%lf %lf",&student[i].sub1,&student[i].sub2);
                student[i].total = student[i].sub1 + student[i].sub2;
               fprintf(file,"%s\t%d\t%.2lf\n",student[i].name,student[i].roll,student[i].total);
               printf("\n");

           }
            printf("File is successfully done");
            fclose(file);
   }

   getch();
}
