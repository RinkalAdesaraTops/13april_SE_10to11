#include<stdio.h>
int main(){
    int f=0,s=1,t,i=1;
    while(i<=10){
        printf("\n %d",f);
        t=f+s;
        f=s;
        s=t;
        i++;
    }
}