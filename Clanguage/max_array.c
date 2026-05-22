#include <stdio.h>
int main()
{
    // even number addition
    // {45,23,34,10,56,47}
    int n,i,max,arr[50];
    printf("\n Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n You have entered elements are \n");
    max = arr[0];
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        if(arr[i]>max){ //56>45
            max=arr[i]; //max=56
        }
    }
    printf("\n Maximum is %d ",max);
}