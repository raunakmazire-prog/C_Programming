/*
2.Write a program which accept range from user and display all 
even numbers in between range
*/

/*
1.Write a program which accept range from user and display all 
numbers in between that range.
*/

#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
int iCount = 0;
if(iStart > iEnd)
{
    printf("Invalid Range");
}
for(iCount = iStart; iCount <= iEnd; iCount++)
{
    if((iCount % 2) == 0)
    {
    printf("%d\t",iCount);
    }

    
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;

}