/*
    Return Maximum From Linked List
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
    int Max = 0;

    while (Head != NULL)
    {
        if(Max < Head->Data)
        {
            Max = Head->Data;
        }
        Head = Head->next;
    }  
    return Max;
}

int main()
{   
    PNODE First = NULL;
    int iRet = 0;

    InsertAtFirst(&First,111);
    InsertAtFirst(&First,51);
    InsertAtFirst(&First,21);
    InsertAtFirst(&First,201);
    InsertAtFirst(&First,11);

    Display(First);

    iRet = Maximum(First);
    printf("Maximum Number is %d",iRet);

    return 0;
}