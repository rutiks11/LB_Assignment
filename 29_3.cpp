/*
    Write a Program which accept one number one number from user
    and check whether 9th or 12th in on or off
    
    Input : 257
    Output : TRUE   
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo1)
{
    UINT iMask1 = 0X00000100;    
    UINT iMask2 = 0X00000800;

    int iResult1 = 0;
    int iResult2 = 0;

    iResult1 = iMask1 & iNo1; 
    iResult2 = iMask2 & iNo1; 

    if((iResult1 == iMask1) | (iResult2 == iMask2))
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
    
    bool bRet = false;

    cout << "Enter Number\n";
    cin >> iValue1;

    bRet = ChkBit(iValue1);
    
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