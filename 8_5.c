// Write a program which accept numer from user and return difference between the summation of odd and even

#include<stdio.h>

int DiffSumEvenOdd(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit%2) == 0)
        {
            iEvenSum = iEvenSum + iDigit; 
        }

        if((iDigit%2) != 0)
        {
            iOddSum = iOddSum + iDigit; 
        }

        iNo = iNo / 10;
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = DiffSumEvenOdd(iValue);
    printf("Difference between summation of odd and even : %d", iRet);
    
    return 0;
    
}