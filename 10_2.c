// Accept N NUmbers from User and return difference betn freq of even number and odd number

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[], int iLength)
{
    // Step 5: Logic
    int iCnt = 0;
    int iCountEven = 0;
    int iCountOdd = 0;

    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt]% 2) == 0)
        {
            iCountEven++;
        }
        
        if((Arr[iCnt]% 2) != 0)
        {
            iCountOdd++;
        }
    }
    return iCountEven - iCountOdd;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

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
    iRet = Display(ptr,iSize);
    printf("Result is %d",iRet);
    // Step 6 : Deallocate the Memory
    free(ptr);

    return 0;
}