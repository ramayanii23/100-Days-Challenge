/* Write a program to calculate the area and circumference of a circle given its radius.


*/#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius");
    scanf ("%f ",&radius);
    float area=3.14*radius*radius;
    float circumf=3.14*2*radius;
    printf("Area of circle is=%f",area);
    printf("\n Circumference of circle is:%f",circumf);
    return 0;
}