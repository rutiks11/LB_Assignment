/*
    Write a program which accept string from user and accept one character
    . Check whether that character is present in string or not

    INPUT  : "marvellous"
              e
    OUTPUT : Character Found
*/

#include <stdio.h>
#include <stdbool.h>


bool ChkChar(char *str, char cValue)
{
    bool bfound = false;

    while (*str != '\0')
    {
        if(*str==cValue)
        {
            bfound = true;
            break;
        }  
        str++;   
    }

    return bfound;
    
}

int main()
{
    char arr[20];
    char ch ='\0';
    bool bRet = false;

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    
    printf("Enter the Character\n");
    scanf(" %c",&ch);
    
    bRet = ChkChar(arr,ch);

    if(bRet == true)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not Found");
    }
    return 0;
}