// Write a program which accept number from user and display its table in reverse order
#include <stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;
    int iTab = 1;
    

    // Updator
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >=1; iCnt--)
    {   
        iTab = iCnt * iNo;
        printf("%d\t",iTab);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}