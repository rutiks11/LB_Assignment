/*
    Write a program which display smallest digits of all elements
    from singly linear linked list.
*/

#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

typedef struct Node NODE;
typedef struct Node *PNODE;
typedef struct Node **PPNODE;

void Display(PNODE Head)
{
    while (Head != NULL)
    {
        printf("| %d | --> ",(Head->data));
        Head = Head->next;
    }
    printf("NULL\n");    
}

void InsertFisrt(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
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

void DisplayProduct(PNODE Head)
{
    int iNo= 0;
    int iDigit = 0;
    int iLarge = 0;

    while (Head != NULL)
    {
        iLarge = 0;
        iNo = (Head->data);

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            if(iLarge < iDigit)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;
        }

        printf("%d\t",iLarge);
        Head = Head->next;    
    }
}

int main()
{
    PNODE First = NULL;

    InsertFisrt(&First,151);
    InsertFisrt(&First,101);
    InsertFisrt(&First,51);
    InsertFisrt(&First,21);
    InsertFisrt(&First,11);

    Display(First);
    
    DisplayProduct(First);

    return 0;
}

