/* Find the second largest element in an array.

*/
#include <stdio.h>

int main()
 {
    int n, i;
    int a[100];
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }


    if(a[0] > a[1])
     {
        first = a[0];
        second = a[1];
    } else 
    {
        first = a[1];
        second = a[0];
    }

    
    for(i = 2; i < n; i++)
     {
        if(a[i] > first) 
        {
            second = first;
            first = a[i];
        }
        else if(a[i] > second && a[i] != first) 
        {
            second = a[i];
        }
    }

    printf("The second largest element is: %d\n", second);

    return 0;
}
