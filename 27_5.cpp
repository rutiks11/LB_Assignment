/*
    Write a Program which accept on number from user and
    on its first four Bits

    Input  : 73
    Output : 79
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(int iNo)
{
    UINT iMask = 0X0000000F;
    int iResult = 0;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return iNo;
    }
    else
    {
        return iMask | iNo;              
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout  << "Enter Number : \n";
    cin >> iValue;

    iRet = OnBit(iValue);
    cout << "Modified Value : " << iRet;

    return 0;
}