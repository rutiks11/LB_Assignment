/*
    Write a Program which accept one number and Poisition from user and 
    on that bit. Return Modified Number.
    Input   : 10    3
    Output  : 14
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);
    
    iResult = iMask & iNo;

    if(iResult ==  iNo)
    {
        return iNo;
    }
    else
    {
        return iNo ^ iMask;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    UINT iRet = 0;

    cout << "Enter Number : \n";
    cin >> iValue1;

    cout << "Enter Position : \n";
    cin >> iValue2;
    
    iRet = OnBit(iValue1,iValue2);
    
    cout << "Modified Value : " << iRet;

    return 0;
}