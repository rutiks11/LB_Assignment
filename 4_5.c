#include<stdio.h>

float Percentage(float iNo1, float iNo2)
{
    if(iNo1 == 0)
    {
        printf("Please Enter Valid Input");
        return;
    }

    float fPer = 0.0;

    fPer = (iNo2/iNo1) * 100;
    
    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0;

    printf("Please enter total marks ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage = %.1f",fRet);

    return 0;
}

