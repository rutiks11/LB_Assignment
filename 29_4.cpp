/*
    Write a Program which accept one number, two positions 
    from user and check whether bit at first or bit at second 
    position is On or Off

    Input   : 10    3   7
    Output  : true        
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool ChkBit(UINT iNo1, int iPos1, int iPos2)
{
    UINT iMask1 = 0X00000001;    
    UINT iMask2 = 0X00000001;

    iMask1 = iMask1 << iPos1;
    iMask2 = iMask2 << iPos2;
    
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
    int iValue2 = 0;
    int iValue3 = 0;

    bool bRet = false;

    cout << "Enter Number\n";
    cin >> iValue1;

    cout << "Enter Position 1 : \n";
    cin >> iValue2;

    
    cout << "Enter Position 2 : \n";
    cin >> iValue3;

    bRet = ChkBit(iValue1,iValue2,iValue3);
    
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