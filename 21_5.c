/*
    Accept character from user and print decimal, octal and hexadecimal value
*/

#include <stdio.h>

void ChkSymbol(char cValue)
{
    printf("Decimal     : %d\n",cValue);
    printf("Octal       : %o\n",cValue);
    printf("Hexadecimal : %x\n",cValue);
}

int main()
{
    char ch = '\0';

    printf("Enter the character ");
    scanf("%c",&ch);

    ChkSymbol(ch);   
}