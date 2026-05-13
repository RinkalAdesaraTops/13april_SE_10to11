#include <stdio.h>
int main()
{
    // {45,23,34,10,56,47}
    int n,i,sum=0;
    printf("\n Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n You have entered elements are \n");
    for(i=0;i<n;i++){
        sum += arr[i];
        printf("%d ",arr[i]);
    }
    printf("\n Sum of all elements are %d ",sum);
}
