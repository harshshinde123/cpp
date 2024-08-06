#include<iostream>
using namespace std;
template <class T>
struct node
{
    T data;
    struct node *next;
};



template <class T>
class SinglyLL
{
    public:
        struct node <T> * First;

        SinglyLL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no,int ipos);
        void Display();
        int Count();
};
template <class T>
SinglyLL<T> :: SinglyLL()
{
    First = NULL;
}
template <class T>
void SinglyLL<T> :: InsertFirst(T no)
{
    struct node <T>* newn = new  node<T>;  

    newn -> data = no;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}
template <class T>
void SinglyLL<T>:: InsertLast(T no)
  {
     struct node<T> * newn=new node<T>;
    newn->data=no;
    newn->next=NULL;
    if (First==NULL)
    {
        First=newn;
        
    }
    else
    {
       struct node<T> * temp= First;
      while( temp->next!=NULL )
      {
       temp=temp->next;
      }
      temp->next=newn;
      
    }
    
  }
  template <class T>
  void SinglyLL<T>:: InsertAtPos(T no,int ipos)
 {
    if ((ipos<1)||(ipos>icount+1))
    {
        cout<<"invalod position"<<"\n";
    }
    if (ipos==1)
    {
        InsertFirst(no);
    }
    else if (ipos==icount+1)
    {
        InsertLast(no);
    }
    else{
        struct node * newn=new node;
        newn->data=no;
        newn->next=NULL;    
        struct node * temp=First;
        for (int icnt = 1; icnt < ipos-1; icnt++)
        {
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
        
     }   
 }
template <class T>
void SinglyLL<T> :: Display()
{
    struct node <T>* temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<"\n";
}
template <class T>
int SinglyLL<T> :: Count()
{
    struct node <T>* temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp -> next;
    }
    return iCnt;
}

int main()
{
    SinglyLL <int> obj1;
    
    obj1.InsertFirst(101);
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
   
     obj1.Display();
    int iRet = obj1.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj1.InsertLast(10);
    obj1.InsertLast(20);
    obj1.InsertLast(30);
    obj1.InsertLast(40);

    obj1.Display();
    int bRet = obj1.Count();
    cout<<"Number of nodes are : "<<bRet<<"\n";

    obj1.InsertAtPos(35,8);
    obj1.Display();
    int aRet = obj1.Count();
    cout<<"Number of nodes are : "<<aRet<<"\n";
    
    SinglyLL <double> obj3;
    obj3.InsertFirst(10.2);
    obj3.InsertFirst(12.3);
    obj3.InsertFirst(52.3);
    obj3.InsertFirst(12.6);
    

    obj3.Display();
    int dRet = obj3.Count();
    cout<<"Number of nodes are : "<<dRet<<"\n";

    SinglyLL <char> obj2;
    obj2.InsertFirst('a');
    obj2.InsertFirst('b');
    obj2.InsertFirst('c');
    obj2.InsertFirst('d');

    obj2.Display();
    int cRet = obj2.Count();
    cout<<"Number of nodes are : "<<cRet<<"\n";

  
   
   

    return 0;
}