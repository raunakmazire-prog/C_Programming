/*
4.Accept an integer and determine whether it is divisible by both 3 and 5,only 3,
only 5,or neither.
*/

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
   if((iValue % 3 == 0) && (iValue % 5 == 0))
   {
      printf("Divisible by Both");
   }
   
   else if(iValue % 3 == 0)
   {
      printf("Divisible by 3 Only");
   }

   else if(iValue % 5 == 0)
   {
      printf("Divisible by 5 Only");
   }

   else
   {
      printf("Neither divisible by 3 nor 5");
   }
}

int main(void)
{
    int iValue= 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);
}