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
    ListNode* merge(ListNode* &left,ListNode* &right){
    ListNode* ans = new ListNode(-1);
    ListNode* temp = ans;
    while (left != NULL && right != NULL) {
        if (left->val < right->val) {
            temp->next = left;
            left = left->next;
        } else {
            temp->next = right;
            right = right->next;
        }
        temp = temp->next; // Move temp to the next node
    }
    if (left != NULL) {
        temp->next = left;
    }
    if (right != NULL) {
        temp->next = right;
    }
    ans = ans->next;
    return ans;
}

    ListNode* middle(ListNode* &head){
        
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head ->next == NULL)
            return head;
        ListNode* mid=middle(head);
       ListNode* left=head;
        ListNode*right=mid->next;
        mid->next=NULL;
        left=sortList(left);
        right=sortList(right);
        ListNode* ans=merge(left,right);
        return ans;
    }
};