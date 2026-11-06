/*
4.Write a program which accept range from user and display all 
numbers on between that range in revers order.
*/

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
int iCount = 0;

if( iStart > iEnd)
{
printf("Invalid Range");
}

for(iCount = iEnd; iCount >= iStart; iCount--)
{
    printf("%d\t",iCount);
}
printf("\n");

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;

}