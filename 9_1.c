// Accept N numbers from user and return difference between summation of even elements and summation of odd elements

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int ilength)
{   
    // Step 5: Logic 
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    
    for(iCnt= 0; iCnt < ilength; iCnt++)
    {
        if((Arr[iCnt]%2) == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
    }
    
    for(iCnt= 0; iCnt < ilength; iCnt++)
    {
        if((Arr[iCnt]%2) != 0)
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iCnt = 0;

    // Step 1: Accept the size of element
    printf("Enter the Size of Array\n");
    scanf("%d",&iSize);

    // Step 2: Allocate Dynamic Memory
    ptr = (int *)malloc(sizeof(int) * iSize);

    if(ptr == NULL)
    {
        printf("Unable to allocate Memory\n");
        return -1;
    }

    // Step 3: Accept Elements of array
    printf("Enter Elements of Array : \n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of Array :\n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("%d\n", ptr[iCnt]);
    }

    // Step 4: Call function By passing the parametes 
    iRet = Difference(ptr,iSize);
    printf("Diffeerence between the Odd and Even %d",iRet);

    // Step 6: Deallocate the Memory
    free(ptr);

    return 0;
}