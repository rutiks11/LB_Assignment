/*
    Write a Program which accept one number and position from user and
    off that bit. Return modified number

    Input : 10  2
    Output: 8
*/

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(int iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos-1);
    
    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return iNo ^ iMask;
    }
    else
    {
        return iNo;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    UINT iRet = 0;

    cout << "Enter Number\n";
    cin >> iValue1;
    
    cout << "Enter Position of Bit\n";
    cin >> iValue2;

    iRet = OffBit(iValue1,iValue2);
    cout << "Modified Number : " << iRet;

    return 0;
}