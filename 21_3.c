/*
    Accept character from user. If character is capital then display all the
    characters from the input characters till Z. If input chracter is small then print all the characters in reverse order till a.
    In other cases return directly
    
*/

#include <stdio.h>

void Display(char cValue)
{
    char cCnt = '\0';

    if((cValue >= 'A') && (cValue <='Z'))   
    {
        for(cCnt =cValue; cCnt<='Z';cCnt++)
        {
            printf("%c\n",cCnt);
        }
        // while(cValue!= '[')  
        // {
        //     printf("%c\t",cValue);
        //     cValue++;
        // }
    }

    else if((cValue >= 'a') && (cValue <='z'))   
    {
        for(cCnt =cValue; cCnt>='a';cCnt--)
        {
            printf("%c\n",cCnt);
        }

        // while(cValue!= '`')
        // {
        //     printf("%c\t",cValue);
        //     cValue--;
        // }   
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