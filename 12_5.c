// Accept N Numbers from User and accept one another number as NO and return Largest  Number

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    // Step 5: Logic
    int iCnt = 0;
    int iDigit = 0;
    
    

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {   
       
        int iSum = 0;
        while (Arr[iCnt] != 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("%d\n",iSum);
    }

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
    DigitsSum(ptr,iSize);

    // Step 6 : Deallocate the Memory
    free(ptr);

    return 0;
}