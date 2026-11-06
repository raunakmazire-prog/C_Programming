/*
3.Write a program which accept distance in kilometer and convert it
into meter.(1 kilometer = 1000 meter)
*/

#include <stdio.h>

int KMtoMeter(int iNo)
{
   int iAns = 0;

   iAns = iNo * 1000;

   return iAns;
}

int main()
{
    int iValue1 = 0,iRet = 0;

    printf("Enter distance: ");
    scanf("%d",&iValue1);

    iRet = KMtoMeter(iValue1);

    printf("The conversion of kilometer to meter:%d",iRet);

    return 0;
}