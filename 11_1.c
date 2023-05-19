// Accept N NUmbers from User and accept one another number as NO and return freq of NO from it

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkNumber(int Arr[], int iLength, int iSearch)
{
    // Step 5: Logic
    int iCnt = 0;
    int iCount = 0;


    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt] == iSearch)
        {
            break;
        } 
    }
    
    if(Arr[iCnt] == iSearch)
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
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    bool bRet = false;
    int iNo = 0;

    // Step 1: Ask user number of elements 
    printf("Enter Number of Elements\n");
    scanf("%d",&iSize);

    // Step 2 : Allocate the Memory Dynamically
    ptr = (int *)malloc(iSize * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Unable to allocate Memory\n");
        return -1;
    }

    // Step 3: Accept Elements 
    printf("Enter %d elements\n",iSize);
    for(iCnt = 0;iCnt <iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of Array are : \n");
    for(iCnt = 0;iCnt <iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    printf("Enter number to search Frequency\n");
    scanf("%d",&iNo);

    // Step 4: Call function by passing address of array
    bRet = ChkNumber(ptr,iSize,iNo);
    
    if(bRet == true)
    {
        printf("Number is Present");
    }
    else
    {
        printf("Number is Not Present");
    }

    // Step 6 : Deallocate the Memory
    free(ptr);

    return 0;
}