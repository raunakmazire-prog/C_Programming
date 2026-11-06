/*
1.Write a program which accept number from user and print that number of $
 and * on screen
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("$ *\t");
    }

}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
