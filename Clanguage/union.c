#include <stdio.h>
union emp
{
   int emp_id,emp_salary; 
   char emp_name[50];
}e1,e2;
int main()
{
    union emp e3;
    printf("\n Enter emp_id:");
    scanf("%d",&e1.emp_id);
    printf("\n Enter emp name:");
    fflush(stdin);
    gets(e1.emp_name);
    printf("\n Enter emp_salary:");
    scanf("%d",&e1.emp_salary);
    
    printf("\n Id \t Name \t Salary");
    printf("\n %d \t %s \t %d ",e1.emp_id,e1.emp_name,e1.emp_salary);
}