#include <iostream>
using namespace std;
struct Node
{
    Node *sPrevious;
    int sValue;
    Node *sNext;

    Node(int val)
    {
        sPrevious = NULL;
        sValue = val;
        sNext = NULL;
    }

    void Print()
    {
        cout << sPrevious << ":" << sValue << ":" << sNext << endl;
    }
};

Node *head = NULL;

void Insert(Node *child)
{
    if(head==NULL){
        head = child;
        return;
    }

    Node *temp = head;
    while (temp->sNext != NULL)
    {
        temp = temp->sNext;
    }
    child->sPrevious = temp;
    temp->sNext = child;
}
void Print()
{
    Node *temp = head;

    //temp->Print();
    //return ;

    while (temp->sNext != NULL)
    {
        temp->Print();
        temp = temp->sNext;
    }
    temp->Print();
}

int Length()
{
   Node *temp = head;
   int l=0;
   while (temp->sNext != NULL)
   {
        temp = temp->sNext;
        l++;
   } 

   return (l+1);
    
}
void InsertAt(Node *p, int pos)
{Node *temp = head;
int l= Length();
int n=0;
if(pos>l)
{
    Insert(p);
    return;
}
if(pos<0)
{
    p->sNext=head;
    head->sPrevious=p;
    head=p;
}
else{
    do
    {
        temp = temp->sNext;
        n++;
    }while(n==pos-1);
    p->sPrevious=temp;
    p->sNext=temp->sNext;
    temp->sNext=p;
}


}

int main()
{
    Node *n = new Node(5);
    //n->Print();
    //head=n;
    //head->Print();
    Insert(n);
    
    Insert(new Node(8));
     Insert(new Node(8));
      Insert(new Node(8));
       Insert(new Node(8));
    Print();
    cout<<"============"<<endl;
    InsertAt(new Node(5000), 10);
    Print();
    cout<<"============"<<endl;
    InsertAt(new Node(6000), -10);
    Print();
    cout<<"============"<<endl;
    InsertAt(new Node(2207),4);
    Print();
return 0;
}