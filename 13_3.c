/*
    Design Application for school management System .
    As school is primary there are 4 standards from 1 to 4
    School fees of each standard is different 
    for first standard fees are 8900, for second standard 12790, for third standard 21000 and
    for fourth standard fees are 23450.
    We have to accept standard from user and display the corresponding fees
    
    Input : 2  Output: 12790 
    Input : 4  Output: 23450 
    Input : 6  Output: Wrong Output 

*/
#include <stdio.h>

int SchoolFees(int iStandard)
{       
    float ifees = 0;

    if(iStandard > 4)
    {
        printf("Wrong Input\n");
    }

    if(iStandard == 1)
    {
        ifees = 8900;    
    }
    else if(iStandard == 2)
    {
        ifees = 12790;
    }
    else if(iStandard == 3)
    {
        ifees = 21000;
    }
    else if(iStandard == 4)
    {
        ifees = 23450;
    }

    return ifees;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter Standard\n");
    scanf("%d",&iValue);

    iRet = SchoolFees(iValue);
    printf("School Fees : %d",iRet);

    return 0;    
}