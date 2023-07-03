/*
    Write a program which accept string from user toggle the case

    Input  : "MarvellouS"
    Output :  4  

*/

#include<stdio.h>

void strtogglex(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z' ))
        {
            *str = *str-32;
        }
        else if((*str >= 'A') && (*str <= 'Z' ))
        {
            *str = *str+32;
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

    strtogglex(arr);

    printf("Modified String is %s", arr);

    return 0;
}