#include<stdio.h>
int main(){
    // PALInDROM
    // 121 = 121
    int no,n,r,rev=0;
    printf("ENter no:");
    scanf("%d",&no);
    n=no;
    while(no>0){ //135
        r=no%10;  //5 3 1
        rev = (rev*10)+r; //0*10+5 =5 5*10+3=53 53*10+1=531
        //5*10=50 +3=53 53*10=530 +1=531
        no=no/10;
    }
    printf("\n Reverse no is %d ",rev);
    if(n==rev){
        printf("\n It is plaindrom no");
    } else {
        printf("\n It is not plaindrom no");
    }
}