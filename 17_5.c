/*
    Input : iRow = 4    iCol = 4

    Output :   1    2   3   4 
               2    3   4   5 
               3    4   5   6    
               4    5   6   7
*/      

#include <stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0, iCnt = 0;

    for(i = 1 ; i<=iRow ; i++)
    {   
        for (j=1,iCnt=i; j <= iCol; j++,iCnt++)
        {
            printf("%d\t",iCnt);
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