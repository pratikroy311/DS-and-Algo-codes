/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *t = head;
        ListNode *p =head;
        while(p && p->next)
        {
            t =t->next;
            p =p->next->next;
            
        }
        return t;
        
    }
};