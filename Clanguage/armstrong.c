#include<stdio.h>
int main(){
    // no = 153 
    // 1^3 + 5^3 + 3^3 =1+125+27 = 153
    int no,n,r,sum=0;
    printf("ENter no:");
    scanf("%d",&no);
    n=no;
    while(no>0){
        r=no%10;
        no=no/10;
        sum = sum+(r*r*r);
    }
    printf("\n Sum is %d ",sum);
    if(n==sum){
        printf("\n It is armstrong no");
    } else {
        printf("\n It is not armstrong no");
    }
}