# include <stdio.h>
int main()
{
   int  n;
    printf("Enter a number  \n ");
    scanf("%d",&n);
    while(n>0)
{
    int d=n%10;
    if(d==1)
    {
    printf("0");
    }
    else if(d==0)
    {
    printf("1");
    }
    else
    {
    printf("INVALID");
    }
     n=n/10;
}
return 0;
}




