/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* mid(ListNode* i, ListNode* j)
    {
        if(j==NULL || j->next==NULL)
            return i;
        return mid(i->next,j->next->next);
    }
    
    
    ListNode* middleNode(ListNode* head) {
        
        return mid(head,head);
        
    }
};