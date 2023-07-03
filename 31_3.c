/*
    Write a program which returns addition of all even elements from
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

int AdditionEven(PNODE Head)
{  
    int iSum = 0;

    while (Head != NULL)
    {
        if((Head->Data) % 2 == 0)
        {
            iSum = iSum + (Head->Data);
        }
        Head = Head->next;
    }  
    return iSum;
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

    iRet = AdditionEven(First);
    printf(" Addition is %d",iRet);

    return 0;
}