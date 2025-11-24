/* Search in a sorted array using binary search.
*/

# include <stdio.h>
int main()
{
    int n,i;
    int search;
    int mid;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search");
    scanf("%d",&search);
    int start=0;
   int  end=n-1;
    while(start<=end)
    {
       mid=(start+end)/2;
       if(arr[mid]==search)
       {
           printf("Element found at index %d",mid);
           return 0;
       }
       else if(arr[mid]<search)
       {
           start=mid+1;
       }
       else
       {
           end=mid-1;
       }
    }
    printf("Element not found \n");
    return 0;
    
}