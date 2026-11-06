/*
5.Write a program which accept number from user and display its table in reverse
  order.
*/

#include <stdio.h>

void TableRev(int iNo)
{
   int iAns = 0;
   int iCount = 0;

   for(iCount = 10; iCount > 0; iCount--)
   {
      iAns = iNo * iCount;

      printf("%d\t",iAns);
   }

}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    TableRev(iValue);
}