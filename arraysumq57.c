/*Find the sum of array elements.*/


#include <stdio.h>
int main() 
{
    int n,i,sum;
    sum=0;
    printf("Enter number of elements");
    scanf("%d",&n);
    int arr[n];

    
    printf("Enter elements into array\n");
    for(i=0;i<n;i++)
    {
        printf("Elements ",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements are  " );
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
            
        }
        printf("The sum is %d ",sum);
        return 0;
    }
  