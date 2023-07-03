/*
    Design Application for income tax department to calculate tax amount.
    According to the income tax department there is no income tax for less than 5 lakhs 
    If income is in between 5 to 10 lakhs then there will be 10% tax
    If income is in between 10 to 20 lakhs then there will be 20% tax
    and for more than 20 lakhs there will be 30% tax
    We have to accept gross income from user and return the tax amount 

    Input : 600000  Output: 10000       (0+10000)
    Input : 450000  Output: 0     

*/

#include<stdio.h>

float IncomeTax(int iIncome)
{
    float fTax = 0.0f;

    if(iIncome <= 500000)
    {
        fTax = 0.0f;        
    }
    else if((iIncome > 500000) && (iIncome <= 1000000))
    {
        fTax = ((float)iIncome * (float)10) / (float)100; 
    }
    else if((iIncome > 1000000) && (iIncome <= 2000000))
    {
        iIncome =  iIncome - 1000000;
        fTax = ((float)iIncome * (float)20) / (float)100;
        fTax = 50000 + fTax; 
    }
    else if(iIncome> 2000000)
    {
        iIncome = iIncome - 2000000;
        fTax = ((float)iIncome * (float)30) / (float)100; 
        fTax = fTax + 250000;
    }
    return fTax;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Gross Income\n");
    scanf("%d",&iValue);

    fRet = IncomeTax(iValue);
    printf("Tax Amount : %.2f",fRet);

    return 0;    
}