/*
    Print Pattern
    
    Input : iRow = 6 iCol= 6
    Output:
    
        *   *   *   *   *   *   
        *   #   #   #   *   *                                                                                                        8
        *   #   #   *   $   *
        *   #   *   $   $   *
        *   *   $   $   $   *
        *   *   *   *   *   *
*/
#include <stdio.h>

void Pattern(int iRow,int iCol)
{
    int i =0, j = 0;

    if(iRow!=iCol)
    {
        printf("Invalid Input");
        return ;
    }


    for(i=iRow; i>=1; i--)
    {
        for(j=1;j<=iCol; j++)
        {
            if((i==1)||(j==1)||(j==iCol)||(i==iRow)||(i==j))
            {
                printf("*\t");
            }
            else if(i>j)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 =0, iValue2 =0;

    printf("Enter the Number of Rows\n");
    scanf("%d",&iValue1);

    
    printf("Enter the Number of Rows\n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}