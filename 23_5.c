/*
    Write a program which accept string from user return the count of white spaces
    INPUT  : "Mar   S"
    OUTPUT : 3
*/

#include <stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;
    int iCount = 0; 

    while (*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }  
        str++;   
    }
    return iCount;
    
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);
    printf("Number of white spaces %d",iRet);

    return 0;
}