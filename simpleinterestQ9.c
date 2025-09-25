/*Write a program to calculate simple and compound interest for given principal, rate, and time
*/#include <stdio.h>
int main()
{
    int principal,rate,time,simpleinterest;
    printf("Enter the values of principal ,rate and time:");
    scanf("%d %d %d",&principal, &rate, &time);
    simpleinterest=(principal*rate*time)/100;
    printf("The simple interest is=%d",simpleinterest);
    return 0;
}