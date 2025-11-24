/*Find the sum of each row of a matrix and store it in an array.
*/
# include <stdio.h>
int main()
{
    int i,j,m,n;
    int sum=0;
    printf("Enter no of rows\n");
    scanf("%d",&m);
    printf("Enter no of columns\n");
    scanf("%d",&n);
    int arr[m][n];
    int rowsum[m];
    printf("Enter elements in array");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
    rowsum[i]=0;
        for(j=0;j<n;j++)
        {
            rowsum[i]+=arr[i][j];
        }
    }
    printf("\nSum of each row\n");
    for(i=0;i<m;i++)
    {
        printf("Row %d= %d\n ",i+1,rowsum[i]);
    }
    return 0;
}
    
    