/*
Read and print a matrix.
*/

#include <stdio.h>
int main() 
{
    int i,j;
    int m,n;
    
printf("Enter number of rows \n");
scanf("%d",&m);
printf("Enter number of columns \n");
scanf("%d",&n);
int arr[m][n];
printf("enter elements in array \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
printf("The matrix is : \n");
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        printf("%d",arr[i][j]);
    }
    printf(" \n");
}
return 0;

}