/*Find the transpose of a matrix.
*/
# include <stdio.h>
int main()
{
    int i,j,m,n;
    printf("Enter no of rows \n");
    scanf("%d",&m);
    printf("Enter no of columns \n");
    scanf("%d",&n);
    int arr[m][n];
    int transpose[m][n];
    printf("Enter elements in array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("The original matrix  is  \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        transpose[j][i]=arr[i][j];
    }
    }
    printf("matrix after transpose \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d",transpose[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}