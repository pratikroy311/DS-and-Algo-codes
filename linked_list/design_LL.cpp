#include <iostream>
using namespace std;

class Node
{
    public:
    
        int val;
        Node *next;
};
class MyLinkedList {
    private:
    Node *head,*tail;
    int count;
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        head =tail=NULL;count =0;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if(index>count)
            return -1;
        Node *temp= new Node;
        temp =head;
        for(int i=0;i<index;i++)
        {
            temp =temp->next;
        }
        return temp->val;
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node *temp =new Node;
        temp->val = val;
        if(head == NULL)
        {
            temp->next =NULL;
            head =tail =temp;
            count++;
        }
        else
        {
            temp->next =head;
            head = temp;
            count++;
        }
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node *temp =new Node;
        temp->val =val;
        temp->next = NULL;
        if(head == NULL)
        {
            head =tail =temp;
            count++;
        }
        else
        {
            tail->next =temp;
            tail =tail->next;
            count++;
        }
            
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if(index > count)
            return;
        if(index ==0 || index == count)
        {
            if(index==0)
            {
                addAtHead(val);
            }
            if(index ==count)
            {
                addAtTail(val);
            }

        }
        Node *temp,*t =new Node;
        temp =head;t->val =val;
        for(int i=1;i<index;i++)
        {
            temp =temp->next;
        }
        t->next =temp->next;
        temp->next =t;
        count++;
        
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if(index>=count)
            return;
        Node *t ,*p=new Node;
        if(index==0)
        {
        p= head;
        head = head->next;
        delete p;
        return;        
        }
        t =head;
        for(int i=0;i<index;i++)
        {
            p=t;
            t=t->next;
        }
        p->next= t->next;
        delete t;
        count--;
        
    }
    void display()
    {
        Node *t =new Node;
        t =head;
        while(t)
        {
            cout << t->val << " ";
            t =t->next;
        }
        cout << endl <<endl;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

int main()
{
   MyLinkedList linkedList; // Initialize empty LinkedList
linkedList.addAtHead(7);
linkedList.addAtHead(2);
linkedList.addAtHead(1);
linkedList.addAtIndex(3,0);  // linked list becomes 1->2->3
linkedList.deleteAtIndex(2);
linkedList.addAtHead(6);
linkedList.addAtTail(4);
linkedList.display();
//int x=linkedList.get(4);  
//cout << x << endl;          // returns 2
//linkedList.addAtHead(4);  // now the linked list is 1->3
//linkedList.addAtIndex(5,0);
//linkedList.addAtHead(6);
//x=linkedList.get(1);
//cout << x <<endl; 

}