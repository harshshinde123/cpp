#include<stdio.h>
#include<stdlib.h>

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
int SearchFirstOcc(PNODE First,int No)
{
    int counter = 1,ipos=-1;
    while(First!=NULL)
    {
    if (First->data==No)
    {
       ipos=counter;
        break;
    }
    First = First->next;
    counter++;
    }
    return ipos;
}
int SearchLasttOcc(PNODE First,int No)
{
    int counter = 1,ipos=-1;
    while(First!=NULL)
    {
    if (First->data==No)
    {
       ipos=counter;
    
    }
    First = First->next;
    counter++;
    }
    return ipos;
}
int middleElement(PNODE First)
{
    PNODE student = First;
    PNODE teacher = First;
    while ((teacher!=NULL)&&(teacher->next!=NULL))//odd and even
    {
        teacher=teacher->next->next;//turtoise algorithm used
        student=student->next;
    }
    return student->data;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 151);// InsertFirst(60,51)
    InsertFirst(&Head, 121);// InsertFirst(60,51)
    InsertFirst(&Head, 111);// InsertFirst(60,51)
    InsertFirst(&Head, 101);// InsertFirst(60,51)
    InsertFirst(&Head, 51);// InsertFirst(60,51)
    InsertFirst(&Head, 21);// InsertFirst(60,21)
    InsertFirst(&Head, 11);// InsertFirst(60,11)
    
    Display(Head);
     iRet = SearchFirstOcc(Head,101);
    if (iRet==-1)
    {
        printf("no element\n");
    }
    else
    {
        printf("element id at index: %d\n",iRet);
    }
    iRet = SearchLasttOcc(Head,101);
    if (iRet==-1)
    {
        printf("no element\n");
    }
    else
    {
        printf("element id at index: %d\n",iRet);
    }
    return 0;
}
