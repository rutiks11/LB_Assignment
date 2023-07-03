// Write a program which checks whether 5th and 18th bit is On or Off

#include<iostream>
using namespace std;

typedef unsigned int UNIT;

bool ChkBit(int iNo)
{
    UNIT iMask = 0X20010;
    UNIT iResult = 0;

    iResult = iMask & iNo;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout << "Enter Number \n";
    cin >> iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout << "5th and 18th bit is On";
    }
    else
    {
        cout << "5th and 18th bit is Off";
    }

    return 0;
}