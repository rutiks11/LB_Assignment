/*
    Write a program which accept one number from user and range of position from user.
    Toggle all bits from that range

    Input   : 897   9   13
    Output  : 879
*/

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
     UINT iMask=((1<<iEnd)-1)^((1<<iStart-1)-1); 
    return iNo^iMask;
    
}

int main()
{
    int iValue = 0;
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout << "Enter Number\n";
    cin >> iValue;

    cout << "Enter Range\n";
    cin >> iValue1;
    cin >> iValue2;

    iRet = ToggleBitRange(iValue,iValue1,iValue2);
    cout << "Modified Number" << iRet;

    return 0;
}