/*Check if a matrix is symmetric.
*/
#include <stdio.h>
int main()
{
    int n, i, j;
    int a[10][10];

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

   
    printf("\nThe matrix is:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int symmetric = 1; 
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++) 
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if(symmetric)
        printf("\nThe matrix is symmetric.\n");
    else
        printf("\nThe matrix is not symmetric.\n");

    return 0;
}
