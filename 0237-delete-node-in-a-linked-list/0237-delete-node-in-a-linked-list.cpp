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
    void deleteNode(ListNode* node) {
        //copy the value of next node in the node to be deleted and skip that nose
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
};