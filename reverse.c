# include <stdio.h>
int main()
{
    int n,rev=0;
    int d;
    printf("Enter a number \n");
    scanf("%d",&n);
    while(n!=0)
    {
         d=n%10;
       rev=rev*10+d;
        n/=10;
    }
    printf("the reverse number is %d",rev);
    return 0;
    
    
}