/*
    Write a Program which accept on enumber from user and
    toggle 7th bit of that number. Return modified number
*/


#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(int iNo)
{
    UINT iMask = 0X00000040;
    return iNo ^ iMask;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout  << "Enter Number : \n";
    cin >> iValue;

    iRet = OffBit(iValue);
    cout << "Modified Value : " << iRet;

    return 0;
}