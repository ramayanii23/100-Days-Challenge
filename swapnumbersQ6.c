/*Write a program to swap two numbers using a third variable.
*/#include <stdio.h>
int main()
{
    int a, b, c;

    // Input two numbers
    printf("Enter the two numbers ");
    scanf("%d %d ", &a,& b);


    printf("Before swapping: a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
