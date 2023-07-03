/*
    Writw a program which search last occurence of particular element
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

int SearchLastOcc(PNODE Head, int No)
{
    int iCnt = 1;
    int iPos = 0;

    while(Head != NULL)
    {
        if(Head->Data == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        Head =  Head->next;
    }

    return iPos;
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

    iRet = SearchLastOcc(First,11);
    printf("Last Occurence of number is %d",iRet);

    return 0;
}