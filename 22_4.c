/*
    Write a program which accept string from user and check whether 
    it contains vowels in it or not

    Input  : "MarvellouS"
    Output : Contain Vowels
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkVowels(char *str)
{
    bool bVowel = false;
    
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'a')|| (*str == 'E')|| (*str == 'e')|| (*str == 'I')|| (*str == 'i')|| (*str == 'O')|| (*str == 'o')|| (*str == 'U')|| (*str == 'u') )
        {
            bVowel = true;
            break;
        }
        str++;
    }   

    return bVowel;

}

int main()
{
    char ch[20];
    bool bRet = 0;

    printf("Enter the String ");
    scanf("%[^'\n']s",&ch);

    bRet = ChkVowels(ch);   

    if(bRet == true)
    {
        printf("Contains Vowels");
    }
    else
    {
        printf("There is no Vowel");
    }    
}