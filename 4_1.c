// Write a program which accept name from and print that name

#include<stdio.h>

int main()
{
    char Name[30];
    
    printf("Please enter full Name :: ");
    scanf("%[^\n]",&Name);

    printf("Your name is %s", Name);
    return 0;
}