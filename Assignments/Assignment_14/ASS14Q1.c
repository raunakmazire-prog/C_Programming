/*
1.Write a program which accept number from user and display its multiplication of
factors.
*/

#include <stdio.h>

int MultFact(int iNo)
{
   int iCount = 0;
   int iMult = 1;

   for(iCount = 1; iCount < iNo; iCount++)
   {
      if(iNo % iCount == 0)
      {
        iMult = iMult * iCount;
      }
   }
   return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}