#include <stdio.h>
int main()
{
    // int i=1;
    // while(i<=10){ //1<=10 entry controlled loop
    //     printf("\n %d",i); //1
    //     i++; //i+=1
    // }
    // do{
    //     printf("\n %d",i);
    //     i++;
    // } while(i<=10);//2<=10 exit controlled loop
    for (int i = 11; i <= 20; i += 2)
    {
        printf("\n %d", i);
    }
}