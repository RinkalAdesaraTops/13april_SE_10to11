#include <stdio.h>
struct emp
{
    int emp_id, emp_salary;
    char emp_name[50];
} e1[50];
int main()
{
    int i, n;
    printf("\n Enter How many employees");
    scanf("%d", &n); // 4
    for (i = 0; i < n; i++)
    {
        printf("\n Enter emp_id:");
        scanf("%d", &e1[i].emp_id);
        printf("\n Enter emp_salary:");
        scanf("%d", &e1[i].emp_salary);
        printf("\n Enter emp name:");
        fflush(stdin);
        gets(e1[i].emp_name);
    }
    printf("\n Id \t Name \t Salary");
    for (i = 0; i < n; i++)
    {
        printf("\n %d \t %s\t%d ", e1[i].emp_id, e1[i].emp_name, e1[i].emp_salary);
    }
}