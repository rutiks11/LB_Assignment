/*
    Write a Program which acceot one number and position from user and
    check whether bit at that Position is on or off. If Bit is one return 
    TRUE otherwise return FALSE
*/


#include <iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(int iNo, int iPos)
{
    UINT iMask =  0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);

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
    int iValue1 = 0;
    int iValue2 = 0;
    bool bRet = false;

    cout << "Enter Number\n";
    cin >> iValue1;

    cout << "Enter Bit Position\n";
    cin >> iValue2;

    bRet = ChkBit(iValue1,iValue2);
    
    if(bRet == true)
    {
        cout << "Bit is On";
    }
    else
    {
        cout << "Bit is Off";
    }

    return 0;
}