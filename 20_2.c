/*
    Accept character from user and check whether it is Capital alphabet or not
    Input : F
    Output : It is Capital Letter   

*/

#include <stdio.h>
#include <stdbool.h>

bool ChkCapitalCharacter(char cValue)
{
    if((cValue>='A') && (cValue <= 'Z'))
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

    bRet = ChkCapitalCharacter(ch);

    if(bRet == true)
    {
        printf("It is a Capital letter");
    }
    else
    {
        printf("It is not a Capital letter");
    }
    return 0;
}