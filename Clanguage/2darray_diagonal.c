#include <stdio.h>
int main()
{
    int row, col, i, j,sum=0,anti_sum=0,cross_sum=0;
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
            if(i==j){
                sum = sum + arr[i][j];
            }
            if(i+j==2){
                anti_sum += arr[i][j];
            }
            if(i==j || i+j==2){
                cross_sum += arr[i][j];
            }
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n Sum of diagonal is %d ",sum);
    printf("\n Sum of anti diagonal is %d ",anti_sum);
    printf("\n Sum of cross diagonal is %d ",cross_sum);
}