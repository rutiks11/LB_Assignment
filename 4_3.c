#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo1,int iNo2)
{
   if(iNo1 == iNo2)
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
    int iValue1  = 0;
    int iValue2  = 0;

    BOOL bRet = FALSE;

    printf("Please First Number \n");
    scanf("%d",&iValue1);

    printf("Please Second Number \n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }
    return 0;
}