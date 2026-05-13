#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    { // row i=1 i=2
        for (j = 1; j <= 5; j++)
        { // column j=1 2 3 4 5 6<=5
            if (i+j>=6)
            {
                printf("* ");
                // printf("%d ",i);
                // printf("%d ",j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}