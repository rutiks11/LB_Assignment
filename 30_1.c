/*
    Writw a program which search first occurence of particular element
    from singly linear linked list.
    Function should return position at which elements is found.
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

int SearchFirstOcc(PNODE Head, int No)
{
    int iCnt = 0;

    while (Head->Data != No)
    {
        Head =  Head->next;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);

    iRet = SearchFirstOcc(First,51);
    printf("First Occurence of number is %d",iRet);

    return 0;
}