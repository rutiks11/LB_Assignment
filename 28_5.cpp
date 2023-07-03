/*
    Write a Program which accept one number from user and toggle
    the content of first and last Nibble of the number nd return 
    modified value. 

    Input  : 10   3
    Output : 14
*/


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0XF000000F;
    return iMask ^ iNo;
}

int main()
{
    int iValue1 = 0;
    UINT iRet = 0;

    cout << "Enter Number : \n";
    cin >> iValue1;

    iRet = ToggleBit(iValue1);
    
    cout << "Modified Value : " << iRet;

    return 0;
}
