// Write a program to accept number and return its reverse number

#include<stdio.h>

void ReverseDigit(int iNo)
{
    int iDigit = 0;
    int iReverse = 0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    ReverseDigit(iValue);

    return 0;
}