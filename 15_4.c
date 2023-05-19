/*
    Input : iRow = 3    iCol = 4
    Output : *  #   *   #
             *  #   *   #
            *  #   *   #
*/
#include <stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;
    char Arr[] = {'#','*'};

    for(i =1; i <= iRow; i++)
    {   
        for ( j=1 ; j <= iCol; j++)
        {
            printf("%c\t",Arr[j%2]);
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