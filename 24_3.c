/*
    Write a program which accept string from user and one character 
    return return index of occurence of that character

    INPUT : MARVELLOUS
            v
    OUTPUT : 4

*/

#include <stdio.h>
#define ERR_NOTFOUND -1

int FirstOccurence(char *str, char cValue)
{
   int iCnt = 1;
   int iPos = ERR_NOTFOUND;

    while (*str != '\0')
    {
        if(*str==cValue)
        {
            iPos = iCnt;
            break;
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
    
    iRet = FirstOccurence(arr,ch);
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