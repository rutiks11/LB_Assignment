/*
    Accept division of student from and depends on the division display exam timing.
    There are 4 divisions in school as A,B,C,D. Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
    (Application should be case insensitive)

    Input  : C
    Output : Your exam at 9.20 AM
*/

#include <stdio.h>

void DisplaySchedule(char cValue)
{
    if(cValue == 'A')
    {
        printf("Exam time : 7 AM");
    }
    else if(cValue == 'B')
    {
        printf("Exam time : 8.30 AM");
    }
    else if (cValue == 'C')
    {
        printf("Exam time : 9.20 AM");    
    }
    else if(cValue == 'D')
    {
        printf("Exam time : 10.30 AM");        
    }
    else
    {
        printf("Invalid Input");
    } 
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}