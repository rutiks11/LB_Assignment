/*
    Write a Program which accept one number and position from 
    userr and toggle that bit. Return modified number.

    Input  : 10   3
    Output : 14
*/


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, int iPos)
{
    UINT iMask = 0X00000001;
    
    iMask = iMask << (iPos -1);
    
    return iMask ^ iNo;
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
    
    iRet = ToggleBit(iValue1,iValue2);
    
    cout << "Modified Value : " << iRet;

    return 0;
}