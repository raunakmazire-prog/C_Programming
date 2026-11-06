/*
5.Write a program which accept number from user and return 
difference between summation of even digits and summation of odd
digits.
*/

#include <stdio.h>

int CountDiff(int iNo)
{
    int Digits = 0;
    int eSum = 0;
    int oSum = 0;
    while(iNo != 0)
    {
      Digits = iNo % 10;

      if(Digits % 2 == 0)
      {
        eSum = eSum + Digits;
      }

      else
      {
        oSum = oSum + Digits;
      }



      iNo = iNo /10;
    }

    return eSum - oSum ;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}