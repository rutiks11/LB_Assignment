// Write a program to accept number and count frequency of such a digit which are less than 6

#include<stdio.h>

int CountFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6 )
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);
    printf("Frequency of Digits are less than 6 : %d",iRet);

    return 0;    
}