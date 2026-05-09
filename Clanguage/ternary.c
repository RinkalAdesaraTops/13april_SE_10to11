#include<stdio.h>
int main(){
// ?:
//(condition)?true block: false block
    int a,b,age,no;
    // find out maximum value from 2 number
    printf("Enter a & b:");
    scanf("%d %d",&a,&b);
    (a>b)?printf("A is maximum"):printf("B is maximum");

    // User is eligible 4 vote or note
    printf("\nEnter age:");
    scanf("%d",&age);
    (age>=18)?printf("\nEligible 4 vote"):printf("\nNot Eligible 4 vote");

    //find no is even or odd
    printf("\nEnter number:");
    scanf("%d",&no);
    (no%2==0)?printf("\n Even number"):printf("\n Odd number");
} 