/*
1.Write a c program that accepts an integer from the user 
and determines whether the entered number is positive,
negative, or zero.
*/

#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue < 0)
    {
        printf("Number is Negative");
    }
    else if(iValue > 0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is Zero");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}