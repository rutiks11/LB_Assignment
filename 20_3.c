/*
    Accept character from user and check whether it is digit or not
    Input : 0-9
    Output : It is character  

*/

#include <stdio.h>
#include <stdbool.h>

bool ChkDigit(char cValue)
{
    if((cValue>='0') && (cValue <= '9'))
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
    char ch = '\0'; 
    bool bRet = false;

    printf("Enter the Character\n");
    scanf("%c",&ch);

    bRet = ChkDigit(ch);

    if(bRet == true)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }
    return 0;
}