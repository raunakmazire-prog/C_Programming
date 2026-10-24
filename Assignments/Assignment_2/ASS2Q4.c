/*
4.Accept two numbers from user and display first number in 
  second number of times.
*/


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter a number:\n");
    scanf("%d",&iValue);

    printf("Enter frequency:\n");
    scanf("%d",&iCount);

    Display(iValue , iCount);

}