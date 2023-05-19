/*
    Input : iRow = 4    iCol = 4

    Output :   *    *   *   *
               *    *   *   #
               *    *   #   #
               *    #   #   #  
*/      

#include <stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;

    for(i = iCol ; i>=1 ; i--)
    {   
        for (j=1; j <= iRow; j++)
        {
            if(j<=i)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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