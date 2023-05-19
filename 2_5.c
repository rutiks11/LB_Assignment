#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CHkEven(int iNo)
{   
    int iCnt = 0;
        if(iNo % 2 == 0)
            {
                return TRUE;
            }
        else
            {
                return FALSE;
            }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number ");
    scanf("%d", &iValue);

    bRet = CHkEven(iValue);
    if(bRet = TRUE)
    {
       printf("Given Number is Even ");
    }
    else
    {
        printf("Given Number is Odd ");
    }
    
    return 0;
}