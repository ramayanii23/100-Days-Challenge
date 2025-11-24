/*Find the sum of all elements in a matrix.

*/
# include<stdio.h>
int main()
{
    int i,j,m,n;
    int sum=0;
    printf("Enter no. of row");
    scanf("%d",&m);
     printf("Enter no. of col");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements i array");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

     for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             sum+=arr[i][j];
         }
     }
     printf("Sum of all elememts %d",sum);
     return 0;
     
    
}