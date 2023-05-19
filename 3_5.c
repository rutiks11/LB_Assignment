//  Write a program which accept number from user and return difference betweeen summation of all its factors and non factors

#include <stdio.h>

int NonFact(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;
    int iDiff = 0;


    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactSum = iFactSum + iCnt;
        }
    }

    for(iCnt =1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
    }

    iDiff = iFactSum - iNonFactSum;
    return iDiff;

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