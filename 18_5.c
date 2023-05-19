/*
    Input : iRow = 4    iCol = 4

    Output :   1    2   3   4 
               1    *   *   4
               1    *   *   4
               1    2   3   4                                                    8    
*/             


#include <stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0,iCnt=0;

    for(i = 1 ; i<= iRow ; i++)
    {   
        for (j=1,iCnt=1; j <= iCol; j++,iCnt++)
        {
             if((i==iRow)||(j==iCol)||(j==1)||(i==1))
            {
                printf("%d\t",iCnt);
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 =0 ;

    printf("Enter Number of rows\n");
    scanf("%d",&iValue1);

    
    printf("Enter Number of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}