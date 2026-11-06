/*
3.Write a program which accept range from user and return addition
of all numbers in between that range.(Range should contains positive
numbers only).
*/

#include <stdio.h>

void RangeSum(int iStart, int iEnd)
{
int iCount = 0;
int iSum = 0;

if(iStart < 0 || iStart > iEnd)
{
printf("Invalid Range");
}




for(iCount = iStart; iCount <= iEnd; iCount++)
{
    
    iSum = iSum + iCount;
    
}

    printf("%d",iSum);

    printf("\n");

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeSum(iValue1, iValue2);

    return 0;

}