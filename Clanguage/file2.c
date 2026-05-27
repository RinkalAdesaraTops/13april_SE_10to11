#include <stdio.h>
int main()
{
    char str[50];
    FILE *f1;
    f1 = fopen("abc.txt","r");
    fgets(str,100,f1);
    // while(str!='\0'){
    //     fscanf(f1,"%s",str);
    // }
    printf("\n Data read from file");
    printf("\n Data is %s ",str);
    fclose(f1);
    // File handling 
    // create/open
    // close
    // read 
    // write
}