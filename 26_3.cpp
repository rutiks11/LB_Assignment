// Write a program which checks whether 7th & 15th & 21th, 28th bit is On or Off

#include<iostream>
using namespace std;

typedef unsigned int UNIT;

bool ChkBit(int iNo)
{   
    UNIT iMask = 0X08104040;
    UNIT iResult = 0;

    iResult = iMask & iNo;

    if(iMask == iResult)
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
        cout << "7th , 15th & 21st Bit is On";
    }
    else
    {
        cout << "7th , 15th & 21st Bit is Off";
    }
    return 0;
}