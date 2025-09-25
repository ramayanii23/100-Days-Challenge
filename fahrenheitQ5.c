/*Write a program to convert temperature from Celsius to Fahrenheit.
*/#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter temp in Celsius");
    scanf ("%f ",&C);
    F=(C*9/5)+32;
    printf("Temperature in fahrenheit is=%f",F);
    return 0;
}