/*
    Input : 5
    Output : 5  #   4   #   3   #   2   #   1
*/
#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt =iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}