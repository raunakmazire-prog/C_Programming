/*
3.Write a program to find factorial of given number.
*/

#include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;

    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = iNo; iCount > 0; iCount--)
    {
        iFact = iFact * iCount;
    }

    return iFact;

}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);
}