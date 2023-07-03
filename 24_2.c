/*
    Write a program which accept string from user and one character 
    return frequency of that character

    INPUT : MARVELLOUS
            M
    OUTPUT : 1
*/

#include <stdio.h>

int ChkChar(char *str, char cValue)
{
   int iCnt = 0;


    while (*str != '\0')
    {
        if(*str==cValue)
        {
            iCnt++;
        }  
        str++;   
    }

    return iCnt;
    
}

int main()
{
    char arr[20];
    char ch ='\0';
    int iRet = 0;


    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    
    printf("Enter the Character\n");
    scanf(" %c",&ch);
    
    iRet = ChkChar(arr,ch);
    printf("Frequency of character %d",iRet);
    
    return 0;
}