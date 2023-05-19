// Write a program to find factorial of given number
#include  <stdio.h>

int Factorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt  = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of Number is %d",iRet);

    return  0;
}