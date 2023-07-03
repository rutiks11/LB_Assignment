/*
    Write a program which accept string from user and one character 
    return return index of last occurence of that character

    INPUT : MARVELLOUS
            L

    OUTPUT : 7

*/

#include <stdio.h>
#define ERR_NOTFOUND -1

int LastOccurence(char *str, char cValue)
{
   int iCnt = 1;
   int iPos = ERR_NOTFOUND;

    while (*str != '\0')
    {
        if(*str==cValue)
        {
            iPos = iCnt;
        }  
        str++; 
        iCnt++;  
    }

    return iPos; 
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
    
    iRet = LastOccurence(arr,ch);

    if(iRet == ERR_NOTFOUND)
    {
        printf("Character Not Found");
    }
    else
    {
        printf("Frequency of character %d",iRet);
    }

    return 0;
}