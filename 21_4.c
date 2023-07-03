/*
    Accept character from user.Check whether it is special symbol or not
    (!,@,#,$,%,^,&,*)
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkSymbol(char cValue)
{
   if((cValue == '!') || (cValue == '@') || (cValue == '#') || (cValue == '$')|| (cValue == '%') || (cValue == '^')|| (cValue == '&')|| (cValue == '*'))
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

    printf("Enter the character ");
    scanf("%c",&ch);

    bRet = ChkSymbol(ch);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");    
    }
    return 0;
}