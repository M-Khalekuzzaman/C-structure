#include<stdio.h>
struct Person{
char name[20];
int roll;
float cgpa;

};
int main()
{
    struct Person person1 = { "Khalekuzzaman",1910979158,3.50};
    struct Person person2 = { "Kaochar",351,3.70};

    printf("Person1 name is : %s\n",person1.name);
    printf("Person1 roll is : %d\n",person1.roll);
    printf("Person1 cgpa is : %.2f\n",person1.cgpa);

     printf("\nPerson2 name is : %s\n",person2.name);
    printf("Person2 roll is : %d\n",person2.roll);
    printf("Person2 cgpa is : %.2f\n",person2.cgpa);


    getch();

}



