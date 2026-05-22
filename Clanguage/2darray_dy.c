#include <stdio.h>
int main()
{
    int row, col, i, j;
    printf("\n ENter row & column:");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    printf("\n Enter matrix:");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n Your matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}