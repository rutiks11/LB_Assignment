/*
    Write a program which accept string from user and display it in reverse order
    Input  : "MarvellouS"
    Output : "SuollevraM"
*/

#include <stdio.h>

void Reverse(char *str)
{
    char dest[20];
    int iLength = 0;
    int iCnt = 0;

    while (*str != '\0')
    {
        str++;
        iLength++;
    }
    str--;

    while (iLength != 0)
    {
        dest[iCnt] = *str;
        iCnt++;
        str--;
        iLength--;
    }

    dest[iCnt] = '\0';
    printf("%s",dest);          
}

int main()
{
    char ch[20];
    
    printf("Enter the String ");
    scanf("%[^'\n']s",&ch);

    Reverse(ch);
  
   return 0;
}