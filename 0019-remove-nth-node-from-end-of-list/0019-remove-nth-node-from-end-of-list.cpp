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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         if(head->next==NULL)return NULL;
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(temp1->next!=NULL){
            if(n>0){
                temp1=temp1->next;
                n--;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        if(n>=1)return head->next;
        temp2->next=temp2->next->next;
        return head;
    }
};