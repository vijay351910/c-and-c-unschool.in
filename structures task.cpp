#include <stdio.h>
#include<string.h>
struct employee
{
    char name[20];
    char employeeid[20];
    char experience[20];
    char salary[20];
};

int main()
{
struct employee e1;
printf("Enter your name: ");
gets(e1.name);
printf("Enter your employeeid: ");
gets(e1.employeeid);
printf("Experience: ");
gets(e1.experience);
printf("enter your salary: ");
gets(e1.salary);
printf("\nName: %s",e1.name);
printf("\nEmployeeid: %s",e1.employeeid);
printf("\nExperience:%s",e1.experience);
printf("\nsalary:%s",e1.salary);
return 0;
}
