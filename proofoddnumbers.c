# include <stdio.h>
int main()
{
    int n,pro;
    pro=1;
    printf("Enter a number  \n ");
    scanf("%d",&n);
    while(n>0)
{
    int d=n%10;
    if(d%2!=0)
    
        pro=pro*d;
        n/=10;
    
}
    printf("The product  is: %d",pro);
    return 0;
}
    
