//problem link: 
//https://leetcode.com/explore/featured/card/recursion-i/250/principle-of-recursion/1681/



 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };
 
 
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* temp = head->next;
        ListNode* p = temp->next;
        temp->next = head;
        head->next = swapPairs(p);
        return temp;
    }
};