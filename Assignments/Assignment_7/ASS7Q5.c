/*
5.Write a program which accept N and print first 5 multiples of N.
*/

#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCount = 0;
    int mult = 0;

    for(iCount = 1; iCount <= 5; iCount++)
    {
        mult = iNo * iCount;
        printf("%d\t",mult);
        
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}