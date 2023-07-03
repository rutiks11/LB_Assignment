/*
    Write a program which accept string from user and one character 
    return return index of last occurence of that character

    INPUT  :  MARVELLOUS
    OUTPUT : SUOLLEVRAM

*/

#include <stdio.h>

void Reverse(char *str)
{
    char *cStrStart = str;
    char *cStrEnd = NULL;
    int iCnt = 0;
    char ch = '\0';

    int iLength = 0; 

    while(*str != '\0')
    {
        str++;
        iLength++;
    }

    cStrEnd = str-1;

    for(iCnt=0; iCnt <= ((iLength-1)/2) ; iCnt++)
    {
        ch = *cStrEnd;
        *cStrEnd = *cStrStart;
        *cStrStart = ch; 

        cStrEnd--;
        cStrStart++;
    }

          
}

int main()
{
    char ch[20];
    
    printf("Enter the String ");
    scanf("%[^'\n']s",&ch);

    Reverse(ch);

    printf("%s",ch);   
   
}