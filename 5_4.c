// Write a program to which accept number and print all odd numbers up to N.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iCnt%2) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0 ;

    printf("Enter NUmber\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}