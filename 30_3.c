/*
    Write a program which returns addition of all elements of all 
    element from singly linear linked list.
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
    printf("Elements of LinkedList are : \n");

    while (Head != NULL)
    {
        printf(" |%d| -->",Head->Data);
        Head =  Head ->next;
    }
    
    printf("NULL \n");
}

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

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

int Addition(PNODE Head, int No)
{
    int Add = 0;

    while(Head != NULL)
    {
        Add = Add + Head->Data; 
        Head = Head->next;   
    }

    return Add;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,11);    
    InsertFirst(&First,21);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    iRet = Addition(First,21);
    printf("Addition of Elements is %d",iRet);

    return 0;
}