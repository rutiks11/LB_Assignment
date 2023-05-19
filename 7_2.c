// Write a program to accept number and check whether it contains zero or not

#include<stdio.h>
#include <stdbool.h>

bool ChkZero(int iNo)
{
    int iDigit = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    if(iDigit == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;

}