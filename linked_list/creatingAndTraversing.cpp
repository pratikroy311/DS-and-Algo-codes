//program for creating a nodes and traversing the nodes by printing it out on display
#include <iostream>
using namespace std;

//Now we will create a node which contains data and next(which is a pointer of type Node)
struct Node
{
    int data;
    struct Node *next;  //pointer to type node
}*first; //declaring a pointer first of type node  globally


void create(int A[],int n)
{
    struct Node *temp,*last; //creating a temporary node and last node
    //initialising the first node
    first =new Node;
    first->data=A[0];  //data part of node is initialised
    first->next=NULL;  //initially next is pointing to null
    last =first;       //and last is also pointing to first as there is only one node

    //now we will copy the values from array to create nodes
    for(int i=1;i<n;i++)
    {
        temp= new Node;   //initialising temporary node
        temp->data=A[i];  
        temp->next=NULL;
        last->next=temp; //next of last will be pointing to temp
        last=temp; //temp becomes new node       
    }
}
void DIsplay(struct Node *p)
{
    while(p!=NULL)
    {
        cout << p->data << " ";
        p=p->next;
    }
}


int main()
{
    int A[]={1,2,3,4,5};
    create(A,5);
    DIsplay(first);
}
