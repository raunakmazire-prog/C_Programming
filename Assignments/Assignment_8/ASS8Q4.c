/*
4.Write a program which accept number from user and diplay its table.
*/

#include <stdio.h>

void Table(int iNo)
{
   int iCount = 0;

   int iAns = 0;

   for(iCount = 1; iCount <= 10; iCount++)
   {
       iAns = iNo *iCount;

       printf("%d\t",iAns);
   }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);
}