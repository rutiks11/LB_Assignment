/*
    Write a program which accept one number from user and count number 
    of ON bit in is without using % and / operator

    Input  : 11
    Output : 3

*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountOne(UINT iNo)
{   
    int iResult = 0;
    int iCount = 0;

    while (iNo != 0)
    {
        iResult = iNo & 1;
        if(iResult == 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }
    return iCount;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    cout << "Enter Number\n";
    cin >> iValue;

    iRet = CountOne(iValue);
    cout << "Count of One :: "<< iRet;

    return 0;
}