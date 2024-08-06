#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));      

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) 
    {
        *First = newn;
    }
    else                
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}
bool LoopCheck(PNODE First)
{
    PNODE student = First;
    PNODE teacher = First;
    bool flag = false;
    while ((teacher!=NULL)&&(teacher->next!=NULL))//odd and even
    {
        teacher=teacher->next->next;//turtoise algorithm used
        student=student->next;
        if(student==teacher)
        {
            flag=true;
            break;
        }
    }  
}
int main()
{
    PNODE Head = NULL;
    PNODE temp1, temp2;

    InsertFirst(&Head, 121);
    InsertFirst(&Head, 111);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);
    
    temp1 = Head;
    temp2 = Head;

    temp1 = temp1->next->next;
    temp2 = temp2->next->next->next->next->next;
    
    temp2->next = temp1;        // Loop created

    bool bret = LoopCheck(Head);
    if (bret==true)
    {
        printf("loop\n");
    }
    else
    {
        printf("no loop\n");
    }
    
    return 0;
}
