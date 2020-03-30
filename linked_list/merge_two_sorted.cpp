#include <iostream>
using namespace std;

 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1;ListNode *t2=l2;ListNode *t3=NULL;
        if(l1->val <=l2->val)
        {
            t3 = l1;
            t1 =t1->next;
        }
        else
        {
            t3=l2;
            t2=t2->next;
        }
        while(t1 && t2)
        {
            if(t1->val < t2->val)
            {
                t3->next =t1;
                t1 = t1->next;
            }
            else
            {
                t3->next = t2;
                t2=t2->next;
            }
        }
        while(t1)
        {
            t3->next = t1;
            t1=t1->next;
        }
        while(t2)
        {
            t3->next = t2;
            t2=t2->next;
        }
        return t3;
        
    }
};