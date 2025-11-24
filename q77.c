/*
Check if the elements on the diagonal of a matrix are distinct.

*/

#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter the elements \n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;  

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) 
        {
            if(a[i][i] == a[j][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are NOT distinct\n");

    return 0;
}
