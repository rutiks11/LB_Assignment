// Write a Program which checks whether 15th bit is On or Off

#include<iostream>
using namespace std;

typedef unsigned int UNIT;

bool ChkBit(UNIT iNo)
{
    UNIT iMask = 0X4000;
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

    cout << "Enter Number\n";
    cin >> iValue;

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        cout << "15th Bit is On";
    }
    else
    {
        cout << "15th Bit is Off";        
    }

    return 0;
}