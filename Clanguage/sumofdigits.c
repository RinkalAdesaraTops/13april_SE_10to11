#include<stdio.h>
int main(){
    int no,r,count=0,sum=0;
    printf("ENter no:");
    scanf("%d",&no);
    //no=452 total digits 4 5 2 = 3
    //sum = 4+5+2 = 11
    while(no>0){
        //452/10=45.2
        r=no%10; //452%10= 2  45%10
        no=no/10; //452/10=45
        count++;
        sum = sum+r; //sum+=r
    }
    printf("\n Total digits are %d ",count);
    printf("\n Sum of digits are %d ",sum);
}