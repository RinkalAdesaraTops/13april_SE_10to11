#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name:"); //R
    gets(name);
    printf("\n Your name is ");
    puts(name);
    // scanf("%s",name);
    // printf("\n Your name is %s ",name);
}