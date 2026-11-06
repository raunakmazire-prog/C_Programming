/*
4.Write a program which accept 3 numbers and print its multiplication
*/

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int mult = 1;

    if(iNo1 != 0)
    {
        mult = mult * iNo1;
    }

    if(iNo2 != 0)
    {
        mult = mult * iNo2;
    }

    if(iNo3 != 0)
    {
        mult = mult * iNo3;
    }

    if(iNo1,iNo2,iNo3 == 0)
    {
        mult = mult * iNo1 * iNo2 * iNo3;
    }
    return mult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0,iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication = %d\n",iRet);
}