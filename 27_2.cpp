/*
    Write a Program which accept one number from useer and off 7th and 
    10th bit of that number. Return modified number.
*/

#include <iostream>
using namespace std;
typedef unsigned int UINT;

UINT OffBit(int iNo)
{
    UINT iMask  = 0X00000240;
    int iResult = 0;

    iResult = iMask & iNo;

    if(iMask == iResult)
    {
        return iResult ^ iNo;
    }
    else
    {
        return iNo;
    }
}

int main()
{
    int iValue  = 0;
    int iRet = 0;

    cout << "Enter Number : \n";
    cin >> iValue ;

    iRet = OffBit(iValue);
    cout << "Modified Value = " << iRet;

    return 0;
}
