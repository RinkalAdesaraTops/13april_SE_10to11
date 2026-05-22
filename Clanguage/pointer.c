#include <stdio.h>
int main()
{
    int a=10,*p;
    // pointer = reference / Address of variable
    printf("\n A is %d ",a);
    p = &a;
    printf("\n P is %d ",*p);
    *p = 25;
    printf("\n A is %d ",a);
    printf("\n P is %d ",*p);
}