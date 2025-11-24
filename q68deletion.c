/* Delete an element from an array.

*/

# include <stdio.h>
int main()
{
    int n,i,pos=-1;
    int element;
    printf("Enter number of elements \n",n);
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be deleted");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
        pos=i;
        break;
        }
    }
    if(pos==-1)
    {
        printf("Elemnts not found\n");
    }
    else 
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    printf("Array after deletion \n");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
    
    
}
