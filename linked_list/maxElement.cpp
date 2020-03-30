#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
}*head;

void create(int a[],int n)
{
    struct Node *temp,*last;
    head = new Node;
    head->data = a[0];
    head->link = NULL;
    last = head;
    int i =1;
    while(i<n)
    {
        temp = new Node;
        temp->data = a[i];
        temp->link = NULL;
        last->link = temp;
        last = temp;
        i++;
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
int Max(struct Node *p)
{
    int m = INT32_MIN;
    while(p!=NULL)
    {
        if(p->data >m)
        {
            m = p->data;
        }
        p = p->link;
    }
    return m;
}



int main()
{
    int a[5]={2,4,5,7,6};
    int size = sizeof(a)/4;
    create(a,size);
    Display(head);
    cout << "total no of nodes is: " << Max(head) << endl;
}