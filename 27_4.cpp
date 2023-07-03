/*
    Write a Program which accept on enumber from user and
    toggle 7th bit of that number. Return modified number
*/


#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(int iNo)
{
    UINT iMask = 0X00000240;
    return iNo ^ iMask;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout  << "Enter Number : \n";
    cin >> iValue;

    iRet = ToggleBit(iValue);
    cout << "Modified Value : " << iRet;

    return 0;
}