/* 
    Design application for hotel. According to the management team of hotel they are giving
   discount on total bill amount of customer. If bill amount is less than 500 then there is
   no discount, if bill amount is less than 1500 and more than 500 they give 10% discount.
   And if the bill amount is more than 1500 then they give 15% discount.
   Our Application shoult accept total bill amount and depends on the discount policy we have
   to return the amount after applying discount. 


   INPUT : 1200 OUTPUT:1080
*/

#include <stdio.h>

float CalculateBill(int iAmount)
{
    float fDesAmount = 0.0f;

    if(iAmount < 0)
    {
        printf("Invalid Input\n");
        return 0.0f; 
    }

    if(iAmount <= 500)
    {
        fDesAmount = iAmount;
    }
    else if((iAmount > 500)&& (iAmount <= 1500))
    {
        fDesAmount = ((float)iAmount) * ((float)10) / ((float)100);
    }
    else if(iAmount > 1500)
    {
        fDesAmount = ((float)iAmount) * ((float)15) / ((float)100);
    }

    return (float)iAmount - fDesAmount;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter Amount\t");
    scanf("%d",&iValue);

    fRet = CalculateBill(iValue);
    printf("Amount to be Paid : %.2f",fRet);

    return 0;
}
