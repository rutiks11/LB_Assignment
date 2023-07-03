/*
    Write a program which displays all elements which are prime from singly 
    linear linked list
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

void DisplayPrime(PNODE Head)
{   
    int iCnt = 0;

    printf("Prime Numbers : \n");

    while (Head != NULL)
    {
        for(iCnt = 2; iCnt < (Head->Data); iCnt++)
        {
            if(((Head->Data) % iCnt) == 0)
            {
                break;
            }
        }

        if(iCnt == (Head->Data))
        {
            printf("%d\n",(Head->Data));
        }

        Head = Head->next;
    }  
}

int main()
{   
    PNODE First = NULL;
    int iRet = 0;

    InsertAtFirst(&First,17);
    InsertAtFirst(&First,51);
    InsertAtFirst(&First,28);
    InsertAtFirst(&First,21);
    InsertAtFirst(&First,11);
    InsertAtFirst(&First,39);
    InsertAtFirst(&First,89);

    Display(First);

    DisplayPrime(First);
  
    return 0;
}