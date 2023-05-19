// Accept N NUmbers from User and check whether it contains 11 or not
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkNumber(int Arr[], int iLength)
{
    // Step 5: Logic
    int iCnt = 0;
    int iCountEven = 0;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;
        }
    }
    if(Arr[iCnt] == 11)
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

    // Step 4: Call function by passing address of array
    bRet = ChkNumber(ptr,iSize);
    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is absent\n");
    }
    // Step 6 : Deallocate the Memory
    free(ptr);

    return 0;
}