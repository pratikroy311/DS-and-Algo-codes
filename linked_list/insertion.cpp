#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
}*head;

void insert(struct Node *p,int pos,int value)
{
    struct Node *t;
    t = new Node;
    t->data =value;
    if(pos == 0)
    {
        t->link= head;
        head = t;
    }
    else if(pos>0)
    {
        for(int i=0;i<pos-1 ;i++)
        {
            p=p->link;
        }
        t->link = p->link;
        p->link = t;

    }
}
void insertSorted(struct Node *p,int value)
{
    struct Node *t,*q;
    t = new Node;q = NULL;
    t->data = value;
    if(p->data >value)
    {
        t->link = head;
        head = t;
    }
    else
    {
        while(p && p->data< value)
        {
            q = p;
            p= p->link;
        }
        t->link = q->link;
        q ->link = t;
    }
    
    
}

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout << p->data << " ";
        p= p->link;
    }
    cout << endl;
}


int main()
{
    insert(head,0,10);
    insert(head,1,12);
    insert(head,2,14);
    insertSorted(head,9);
    insertSorted(head,6);
    insertSorted(head,18);
    Display(head);
}