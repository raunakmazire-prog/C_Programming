/*
4.Write a program which accept number from user and return multiplication
of all digits.
*/


#include <stdio.h>

int MultDigits(int iNo)
{
    int Digits = 0;
    int iMult = 1;
    while(iNo != 0)
    {
      Digits = iNo % 10;

      if(Digits != 0)
      {
        iMult = iMult * Digits;
      }

      iNo = iNo /10;
    }

    return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("%d",iRet);

    return 0;
}