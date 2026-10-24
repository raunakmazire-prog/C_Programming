//2.Accept one number from user and print that number of * on sceen.

void Display(int iNo)
{
    //write updater
    while(iNo >= 1)
    {
        printf("*");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}