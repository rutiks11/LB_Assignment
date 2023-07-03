/*
    Accept character from user and check whether it is alphabet or not
    Input : F
    Output : It is character  
    
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkCharacter(char cValue)
{
    if(((cValue>='A') && (cValue <= 'Z')) || ((cValue>='a') &&  (cValue<='z')))
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

    bRet = ChkCharacter(ch);

    if(bRet == true)
    {
        printf("It is a Alphabet");
    }
    else
    {
        printf("It is not a Alphabet");
    }
    return 0;
}