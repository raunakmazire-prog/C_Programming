/*
4.Write a program which accept temperature in Fahrenheit and convert
it into celsius.(1 celsius =(Fahrenheit - 32) *(5/9))
*/

#include <stdio.h>

double FhtoCs(float fTemp)
{
   double celsius = 0.0;

   celsius = ((fTemp - 32)*(5.0/9.0));

   return celsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The conversion of fahrenhiet into celsius is:%lf",dRet);

    return 0;
}