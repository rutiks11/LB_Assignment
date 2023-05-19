// Accept N NUmbers from User and display all such elements which Multiples of 11

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    // Step 5: Logic
    int iCnt = 0;

    printf("Numbers are Multiple of 11 : \n");
    for(iCnt = 0; iCnt <iLength; iCnt++)
    {
        if((Arr[iCnt]%11) == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;

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
    Display(ptr,iSize);
    
    // Step 6 : Deallocate the Memory
    free(ptr);

    return 0;
}