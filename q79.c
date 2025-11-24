/*
Perform diagonal traversal of a matrix.
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];


    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    
    for(int start = 0; start < n; start++) 
    {
        int i = 0, j = start;
        while(i < n && j >= 0) 
        {
            printf("%d ", a[i][j]);
            i++; 
            j--;
        }
        printf("\n");
    }

    
    for(int start = 1; start < n; start++) 
    {
        int i = start, j = n - 1;
        while(i < n && j >= 0) 
        {
            printf("%d ", a[i][j]);
            i++; 
            j--;
        }
        printf("\n");
    }

    return 0;
}
