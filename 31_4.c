/*
    Write a program which return second maximum elements from 
    singly linear linked list
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

int Maximum(PNODE Head)
{  
    int iMax = 0;
    
    while (Head != NULL)
    {
        if(iMax < (Head->Data))
        {
            iMax = (Head->Data);
        }
        Head = Head->next;
    }
    return iMax;
}

int SecondMax(PNODE Head)
{
    int iMax = 0;
    iMax = Maximum(Head);
    int iSec_Max = 0;

    while (Head != NULL)
    {
        if((iMax > (Head->Data)) && (iSec_Max < (Head->Data)))
        {
            iSec_Max = (Head->Data);
        }
        Head = Head->next;
    }
    return iSec_Max;
}

int main()
{   
    PNODE First = NULL;
    int iRet = 0;

    InsertAtFirst(&First,17);
    InsertAtFirst(&First,51);
    InsertAtFirst(&First,28);
    InsertAtFirst(&First,21);
    InsertAtFirst(&First,102);
    InsertAtFirst(&First,30);
    InsertAtFirst(&First,89);

    Display(First);

    iRet = SecondMax(First);
    printf(" Addition is %d",iRet);

    return 0;
}