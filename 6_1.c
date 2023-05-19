// Write a program which accept number from user and if number is less than 50then print small,
// if it is greater than 50 and less than 100 then print medium, 
// if it is greater than 100 then print large

#include<stdio.h>

void Number(int iNo)
{
    if((0 < iNo)  && (iNo <= 50))
    {
        printf("Small");
    }
    else if((50 < iNo) && (iNo <= 100))
    {
        printf("Medium");
    }
    else if (100 < iNo)
    {
        printf("Large");        
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);
}