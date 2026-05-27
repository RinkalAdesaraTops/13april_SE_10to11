#include <stdio.h>
int main()
{
    FILE *f1;
    f1 = fopen("abc.txt","w");
    if(!f1){
        printf("\n File not exist");
    } else {
        printf("\n File created");
    }
    fprintf(f1,"%s","gfhjsdgfhsgf");
    fclose(f1);
    // File handling 
    // create/open
    // close
    // read 
    // write
}