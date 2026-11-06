/*
5.Write a program which returns difference between Even factorial
   and odd factorial of given number.
*/

/*
4.Write a program to find odd factorial of given number.
*/

#include <stdio.h>

int FactorialDiff(int iNo)
{
    int iEven = 1;
    int iCount = 0;
    int iOdd = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if((iCount) % 2 == 0)
        {

            iEven = iEven * iCount;
        
        }

        else
        {
             iOdd = iOdd * iCount;
        }
        
    }
    return iEven - iOdd;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n",iRet);

    return 0;
}