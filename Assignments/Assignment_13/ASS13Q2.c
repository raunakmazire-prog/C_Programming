/*
2.Write a program which accept number from user and return the
count of odd digits
*/


#include <stdio.h>

int CountOdd(int iNo)
{
   int oCount = 0;
   int Digits = 0;

   while(iNo != 0)
   {
      Digits = iNo % 10;

      if(Digits % 2 != 0)
      {
         oCount++;
      }

      iNo = iNo /10;
   }

   return oCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);
}