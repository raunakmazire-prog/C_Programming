/*
5.Write a program which accept total marks and obtained marks from user and calculate
   percentage.
*/

#include <stdio.h>

float Percentage(int iNo1, int iNo2)
{
   float fResult = 0.0f;

   if(iNo1 == 0)
   {
      return 0.0f;
   }

   fResult = (((float)iNo2 / iNo1)*100);

   return fResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("%.2f%%",fRet);

    return 0;

}