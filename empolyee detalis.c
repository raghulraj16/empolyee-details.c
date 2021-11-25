#include <stdio.h>

struct employee{
    char    name[30];
    int     phonenumber;
    int     age;
    float   salary;
};

int main()
{
    struct employee emp;

    printf("\nEnter details :\n");
    printf("Name :");
    gets(emp.name);
    printf("phonenumber :");
    scanf("%d",&emp.phonenumber);
    printf("Age:");
    scanf("%d",&emp.age);
    printf("Salary :");
    scanf("%f",&emp.salary);


    printf("\nEntered detail is:\n");
    printf("Name: %s\n",emp.name);
    printf("Phone number: %d\n",emp.phonenumber);
    printf("Age: %d\n",emp.age);
    printf("Salary: %f\n",emp.salary);
    return 0;
}
