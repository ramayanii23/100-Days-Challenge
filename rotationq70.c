/*
Rotate an array to the right by k positions.
*/
#include <stdio.h>
int main() 
{
    int n,i,j,k;
    int temp;
    printf("Enter number of elements \n ",n);
    
        scanf("%d",&n);
    
    int arr[n];
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter position for rotation \n");
    scanf("%d",&k);
    for(j=0;j<=k;j++)
    {
        arr[n-1]=temp;
        for(i=n-1;i>=1;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
return 0;