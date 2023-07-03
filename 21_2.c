/*
    Accept character from user. If character is small display its corresponding capital character,
    and if it small then display its corresponding capital. In other cases display as it is 
*/

#include <stdio.h>

void Display(char cValue)
{
    if((cValue >= 'A') && (cValue <='Z'))   
    {
        printf("%c",cValue+32);
    }
    else if ((cValue>= 'a') && (cValue<= 'z'))
    {
        printf("%c",cValue-32);
    }
    else
    {
        printf("%c",cValue);
    }   
}

int main()
{
    char ch = '\0';

    printf("Enter the character ");
    scanf("%c",&ch);

    Display(ch);

    return 0;
}