/*
    Write a program which accept string fromdisplay only digits from that string 

    INPUT  : "marve89llous121"
    OUTPUT : 89121
*/

#include <stdio.h>

void Display(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9' ))
        {
            printf("%c",*str);
        }
        str++;
        
    }
    
}

int main()
{
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    Display(arr);

    return 0;
}