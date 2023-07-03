/*
    Write a program which reverse each elements of singly liked list
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

void Reverse(PNODE Head)
{  
    int iReverse = 0;
    int iDigit = 0;
    int iNo = 0;
    
    while (Head != NULL)
    {
        iReverse = 0;
        iNo = (Head->Data);

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iReverse = (iReverse * 10) + iDigit;       
            iNo = iNo / 10; 
        }
        printf("%d\t",iReverse);
        Head = Head->next;
    }  
}

int main()
{   
    PNODE First = NULL;

    InsertAtFirst(&First,17);
    InsertAtFirst(&First,51);
    InsertAtFirst(&First,28);
    InsertAtFirst(&First,21);
    InsertAtFirst(&First,102);
    InsertAtFirst(&First,30);
    InsertAtFirst(&First,89);

    Display(First);

    Reverse(First);

    return 0;
}