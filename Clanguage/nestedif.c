#include <stdio.h>
int main()
{
    // maximum from 4 variable a,b,c,d  using nested if
    int a,b,c;
    printf("\n Enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){ //a=35 b=20 c=45
        if(a>c){
            printf("\n A is maximum");
        } else {
            printf("\n C is maximum");
        }
    } else {
        if(b>c){
            printf("\n B is maximum");
        } else {
            printf("\n C is maximum");
        }
    }
}