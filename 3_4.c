// Write a program to accept number and print sum of non factors of it

#include <stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum; 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);
    
    iRet = NonFact(iValue);
    printf("%d",iRet);

    return 0;
}