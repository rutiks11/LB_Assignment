// Write a program to accept number and count frequency of 2 in it

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
        if(iDigit == 2)
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
    printf("Frequency of 2 is : %d",iRet);

    return 0;
    
}