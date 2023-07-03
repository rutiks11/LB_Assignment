/*
    Write a Program which accept two numbers from user and display 
    position of common on bit from that two numbers.

    Input  : 10  15  
    Output : 2   4   
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1, UINT iNo2)
{
    int iResult1 = 0;
    int iResult2 = 0;
    int iCount = 0;
    int iPos = 1;

    cout << "Positions of Common Bits:\n";

    while ((iNo1 != 0) && (iNo2 != 0))
    {
        iResult1 = iNo1 & 1;
        iResult2 = iNo1 & 1;
        
        if((iResult1 == 1) && (iResult2 == 1))
        {
            cout << iPos << endl;
        }

        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
        
        iPos++;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    cout << "Enter Number\n";
    cin >> iValue1;

    cout << "Enter Number\n";
    cin >> iValue2;

    CommonBits(iValue1,iValue2);
    
    return 0;
}