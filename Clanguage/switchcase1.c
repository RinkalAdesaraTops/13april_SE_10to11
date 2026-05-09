#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("\n ENter 2 no:");
    scanf("%d %d",&a,&b);
    printf("\n+.Addition\n-.Minus\n*.Multiply\n/.Division");
    printf("\n ENter your choice:");
    fflush(stdin); //standard input
    scanf("%c",&ch); //ch=7
    switch(ch){
        case '+': printf("\n Addition is %d",a+b);
                break;
        case '-': printf("\n Minus is %d",a-b);
                break;
        case '*': printf("\n Multiply is %d",a*b);
                break;
        case '/': printf("\n Division is %d",a/b);
                break;
        default: printf("\n Invalid choice..");
                 break;
    }
}