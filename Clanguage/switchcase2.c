#include<stdio.h>
int main(){
    char ch;
    printf("\n ENter character:");
    scanf("%c",&ch); //ch=7
    switch(ch){
        case 'A': 
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a': 
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("\n It is vowel");
                  break;

        default: printf("\n Consonant..");
                 break;
    }
}