/*
    Accept character from user and check whether it is small case or not(a-z)
    Input : g
    Output : It is small case character  

*/

#include <stdio.h>
#include <stdbool.h>

bool ChkSmallCharacter(char cValue)
{
    if((cValue>='a') && (cValue <= 'z'))
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

    bRet = ChkSmallCharacter(ch);

    if(bRet == true)
    {
        printf("It is Small Case character");
    }
    else
    {
        printf("It is not small case character");
    }
    return 0;
}