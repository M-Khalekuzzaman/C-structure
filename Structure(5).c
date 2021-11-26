//structure with function;
#include<stdio.h>
struct Person{
char name[50];
int roll;
float cgpa;
};
void display(struct Person p)
{
    printf("Name : %s\n",p.name);
    printf("Roll : %d\n",p.roll);
    printf("Cgpa : %.2f\n",p.cgpa);
    printf("\n");

}
int main()
{
    struct Person person1,person2;
    strcpy(person1.name,"Khalekuzzaman");
    person1.roll = 158;
    person1.cgpa = 3.50;
    display(person1);

    strcpy(person2.name,"Kaochar");
    person2.roll = 351;
    person2.cgpa = 3.70;
    display(person2);



    getch();
}
