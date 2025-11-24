
/*Search for an element in an array using linear search.
*/# include <stdio.h>
int main()
{
    int n,i;
    int search;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            printf("Elements %d found at index %d.\n ",search,i++);
            return 0;
        }
    }
    printf("Elements %d not found in the array \n");
    return 0;
}