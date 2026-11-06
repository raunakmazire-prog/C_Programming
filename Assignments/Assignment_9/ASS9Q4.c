/*
4.Write a program to find odd factorial of given number.
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if((iCount) % 2 != 0)
        {

        iFact = iFact * iCount;
        
        }
        
    }
    return iFact;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d",iRet);

    return 0;
}