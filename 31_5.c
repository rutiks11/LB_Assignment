/*
    Write a program which display addition of digits of elements
    from singly linear list
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

void DisplayLarge(PNODE Head)
{  
    int iSum = 0;
    int iDigit = 0;
    int No = 0;
    
    printf("Addition of Digits is : \n");
    while (Head != NULL)
    {
        iSum = 0;
        No = (Head->Data);
        while (No != 0)
        {
            iDigit = No % 10;
            iSum = iSum + iDigit;      
            No = No / 10; 
        }
        printf("%d\t",iSum);
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

    DisplayLarge(First);

    return 0;
}