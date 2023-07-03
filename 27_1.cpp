/* 
   Write a program which accept one numbe form user and off 7th bit of that number if it is on.
   Return Modified number
   Input  : 79
   Output : 15
*/

#include <iostream>
using namespace std;

typedef unsigned int UINT;

UINT BitOff(int iNo)
{
   int iMask = 0X00000040;
   int iResult = 0;

   iResult = iNo & iMask;
   
   if(iResult == iMask)
   {
      return (iMask ^ iNo);
   }
   else
   {
      return iNo;
   }
}

int main()
{
   int iValue = 0;
   int iRet  = 0;

   cout << "Enter Value";
   cin >> iValue;

   iRet = BitOff(iValue);
   cout << "Modified Value :: " << iRet;

   return 0;
}