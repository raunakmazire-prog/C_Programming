/*
1.Write a program which accept radius of circle 
from user and calculate its area.Consider value of PI as 3.14.
(Area = PI * Radius *Radius)
*/

#include <stdio.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    double Area = 0.0f;

    Area = PI * fRadius * fRadius;

    return Area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0f;

    printf("Enter radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of a Circle:%lf",dRet);

    return 0;
}
