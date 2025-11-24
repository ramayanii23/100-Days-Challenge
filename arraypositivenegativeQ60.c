
/*
Count positive, negative, and zero elements in an array.
*/#include <stdio.h>

int main() 
{
    int n,i;
    int positive=0;
    int negative=0;
    int zero=0;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d  elements in array \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>0)
        positive++;
        else if(arr[i]<0)
        negative++;
        else
        zero++;
    }
    printf("\nTotal positive numbers = %d\n", positive);
    printf("Total negative numbers = %d\n", negative);
    printf("Total zero elements    = %d\n", zero);
    
}
