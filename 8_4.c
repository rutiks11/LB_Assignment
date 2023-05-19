// Write a program which accept numer from user and return multiplication of all digits

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);
    printf("Multiplication of Digits is : %d", iRet);
    
    return 0;
    
}