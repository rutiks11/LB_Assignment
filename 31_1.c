/*
    Write a program which display all elements which are perfect from singly 
    linear linkedList
*/

#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int Data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("|%d| --> ", Head->Data);
        Head = Head->next;
    }
    printf("NULL\n");
}

void InsertAtFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    // Memory Allocation
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void DisplayPerfect(PNODE Head)
{   
    int iCnt = 0;
    

    printf("Inside Perfect Function\t");

    while (Head != NULL)
    {
        int iSumFact = 0;
        for(iCnt = 1; iCnt <= ((Head->Data)/2); iCnt++)
        {
            if(((Head->Data) % iCnt) == 0)
            {
                iSumFact = iSumFact + iCnt; 
            }
        }

        if((Head->Data) == iSumFact)
        {   
            printf("%d\t",Head->Data);
        }
        Head = Head->next;
    }  
}

int main()
{   
    PNODE First = NULL;
    int iRet = 0;

    InsertAtFirst(&First,28);
    InsertAtFirst(&First,51);
    InsertAtFirst(&First,28);
    InsertAtFirst(&First,21);
    InsertAtFirst(&First,6);


    Display(First);

    DisplayPerfect(First);
  
    return 0;
}