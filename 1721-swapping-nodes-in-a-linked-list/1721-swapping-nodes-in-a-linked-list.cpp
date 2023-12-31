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
    int size(ListNode* head){
        int count=0;
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
         ListNode* start=head;
        ListNode* end=head;
        
            while(--k){
                end=end->next;
            }
        
        ListNode* first=end;
        while(end->next!=NULL){
            start=start->next;
            end=end->next;
        }
        swap(first->val,start->val);
        return head;
    }
};