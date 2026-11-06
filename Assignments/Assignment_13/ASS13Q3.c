/*
3.Write a program which accept number from user and return the 
count of digits in between 3 and 7.
*/

#include <stdio.h>

int CountRange(int iNo)
{
    int Digits = 0;
    int iCount = 0;
    while(iNo != 0)
    {
      Digits = iNo % 10;

      if(Digits > 3 && Digits < 7 )
      {
         iCount++;
      }

      iNo = iNo /10;
    }

    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("%d",iRet);

    return 0;
}