/*
1.Write a program which accept number from user and return the 
count of even digits.
*/

#include <stdio.h>

int CountEven(int iNo)
{
   int eCount = 0;
   int Digits = 0;

   while(iNo != 0)
   {
      Digits = iNo % 10;

      if(Digits % 2 == 0)
      {
         eCount++;
      }

      iNo = iNo /10;
   }

   return eCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("%d",iRet);
}