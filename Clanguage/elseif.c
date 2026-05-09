#include <stdio.h>
int main()
{
    // elseif ladder
    int no;
    printf("\n Enter no:");
    scanf("%d", &no);
    if (no > 0)
    {
        printf("\n +ve number");
    }
    else if (no == 0)
    {
        printf("\n Zero");
    } else {
        printf("\n -ve number");
    }
    //  else if(no<0){
    //     printf("\n -ve number");
    // } else {
    //     printf("\n Zero");
    // }
}