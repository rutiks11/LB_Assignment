/*
    Write a program which accept string from user and return difference  between 
    frequency of small characters and frequency of capital characters.

    Input  : "MarvellouS"
    Output : 6
*/

#include <stdio.h>

int CountDifference(char *str)
{
    int iSmallCount = 0;
    int iCapitalCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmallCount++;
        }        
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapitalCount++;
        }
        str++;
    }

    return iCapitalCount - iSmallCount;   
}

int main()
{
    char ch[20];
    int iRet = 0;

    printf("Enter the String ");
    scanf("%[^'\n']s",&ch);

    iRet = CountDifference(ch);   
    printf("Difference between Capital letters and Small letters : %d ",iRet);
}