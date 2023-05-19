// Write a program which accept N and print first 5 multiples of N

#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    int iMult = 0;


    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMult = iNo * iCnt;
        printf("%d\t",iMult);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);
}