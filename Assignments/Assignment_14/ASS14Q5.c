/*
5.Write a program which accept number from user and return difference between 
summation of all its factors and non factors.
*/

#include <stdio.h>

int FactDiff(int iNo)
{
   int iCount = 0;
   
   int fSum = 0;

   int nfSum = 0;


   for(iCount = 1; iCount < iNo ; iCount++)
   {
      if(iNo % iCount == 0)
      {
         fSum = fSum + iCount;
      }

      else 
      {
        nfSum = nfSum + iCount;
      }
   }

   return fSum - nfSum;
   
}

int main()
{
    int iValue = 0;

    int iRet = 0;
    

    printf("Enter number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);


    return 0;
}