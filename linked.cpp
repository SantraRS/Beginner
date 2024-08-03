#include<iostream>
using namespace std;

struct Node{
    int sValue;
    Node *sAdd;
    Node(int val){
        sValue=val;
        sAdd=NULL;
    }
    void Print(){
     cout<<sValue<<":"<<sAdd<<endl;
    }

    
    
};


Node *head;

void Insert(Node *child){
    cout << "===== Insert Called =======" << endl;
    Node *temp = head;
    while(temp->sAdd != NULL){
        temp = temp->sAdd;
    }
    temp->sAdd = child;
    cout <<"Added Child" <<endl;
}

void Print(){
    Node *temp = head;
    while(temp->sAdd != NULL){
        temp->Print();
        temp=temp->sAdd;
    }
    temp->Print();
}
int Length(){
    Node *temp = head;
    int l=0;
    while(temp->sAdd != NULL){
       temp=temp->sAdd;
        l++;
    }
    return (l+1);
}

void InsertAt(Node *a, int pos)
{   Node *temp = head;
    int l=Length();
    if (pos>l){
        Insert(a);
    }
    else{
        for(int i=0;i<pos-1;i++)
        {temp=temp->sAdd;}
        a->sAdd= temp->sAdd;
        temp->sAdd=a;
    }
}

void DelAt(int pos)
{   Node *temp = head;
    int l=Length();
    Node *next;
       for(int i=0;i<pos-2;i++)
        {temp=temp->sAdd;
        next=temp->sAdd;}
        temp->sAdd=next->sAdd;
    }
void Rprint(Node *print)
{
    int l = Length();
    if (print->sAdd = = NULL)
    {
        print->Print();
    }

    else
    {
        for (int i = 0; i <= l; i++)
        {
            print = print->sAdd;
            Rprint(*print);
        }
    }
}


void DelAtStart()
{head=head->sAdd;}

int main(){
    Node n(5);
    head = &n;
    head->Print();
    
    Node c(9);
    Insert(&c);

    Node d(8);
    Insert(&d);
    
    Node e(7);
    Insert(&e);
    Node f(345);
    cout <<"====================" << endl;
    Print();
    InsertAt(&f,2);
    Print();
    cout<<Length()<<endl;

    InsertAt(new Node(654),9);
    Print();
    cout<<Length()<<endl;

    cout <<"====================" << endl;
    DelAtStart();
    Print();
    cout <<"====================" << endl;
    DelAt(3);
    Print();
    


    return 0;
}
