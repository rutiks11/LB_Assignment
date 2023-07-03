/*
   We have to Design application for tourist company .
   Tourist company provides cars on rent. Depends on the running of car they apply rent.
   If running is less than 100 kilometers then they change 25 rupees per kilometer
   and if running is more than 100 kilometers then they apply 15 rupees per kilometer after
   100 kilometers. We have to accept number of Kilometers from user and return the estimated rent
   
    Input : 73   Output: 1825 
    Input : 132  Output: 2980 
    Input : 189  Output: 3835
*/
#include <stdio.h>

int TouristBill(int iKilometer)
{   
    int iRent  = 0;

    if(iKilometer <= 100)
    {
        iRent = iKilometer * 25;
    }
    else if(iKilometer > 100)
    {
        iRent = (100 * 25) + ((iKilometer - 100) * 15);
    }
    
    return iRent;
}

int main()
{
    int iValue =0;
    int iRet = 0;

    printf("Enter Travelled Distance in Kilometers \n");
    scanf("%d",&iValue);

    iRet = TouristBill(iValue);
    printf("Rent : %d", iRet);

    return 0;    
}