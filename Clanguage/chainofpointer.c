#include <stdio.h>
int main()
{
    int a,*p,**p1,***p2;
    a=25;
    p=&a;
    p1=&p;
    p2 = &p1;
    printf("\n A is %d ",a);
    printf("\n P is %d ",*p);
    printf("\n P1 is %d ",**p1);
    printf("\n P2 is %d ",***p2);
    **p1 = 100;
    printf("\n After update ");
    printf("\n A is %d ",a);
    printf("\n P is %d ",*p);
    printf("\n P1 is %d ",**p1);
    printf("\n P2 is %d ",***p2);
}