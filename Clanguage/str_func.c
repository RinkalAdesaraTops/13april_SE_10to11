#include <stdio.h>
#include <string.h>
int main()
{
    char name[50],name2[50];
    printf("Enter your name:"); //R
    gets(name);
    printf("\n Your name is ");
    puts(name);
    printf("\n Your name2 is ");
    gets(name2);
    // printf("\n length is %d ",strlen(name));
    // printf("\n Uppercase is %s ",strupr(name));
    // printf("\n Lowercase is %s ",strlwr(name));
    // printf("\n Reverse is %s ",strrev(name));
    // strcpy(name2,name);
    // printf("\n Copy name is ");
    // puts(name2);
    // strcat(name,name2);
    // printf("\n Merge name is ");
    // puts(name);
    printf("\n Compare string is %d ",strcmp(name,name2));
    // Abc abc str1 == str2 = 0
    //str1>str2 = 1
    //str1<str2 = -1
    // 1523 - 11
}