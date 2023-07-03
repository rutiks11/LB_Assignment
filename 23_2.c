/*
    Write a program which accept string from user and convert 
    it into lower case

    Input : "marvellous multi os"
    Output  : "MARVELLOUS MULTI OS"

*/

#include<stdio.h>

void struprx(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z' ))
        {
            *str = *str-32;
        }
        str++;
    }
    
    return iCnt;
}

int main()
{
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified String is %s", arr);

    return 0;
}