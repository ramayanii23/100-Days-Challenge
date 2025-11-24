/*Check if a string is a palindrome.
*/

#include <stdio.h>

int main()
 {
    char str[100];
    int length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   


    while (str[length] != '\0') 
    {
        length++;
    }

    int start = 0, end = length - 1;

    while (start < end)
    {
        if (str[start] != str[end])
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("It is a palindrome.\n");
    else
        printf("It is NOT a palindrome.\n");

    return 0;
}
