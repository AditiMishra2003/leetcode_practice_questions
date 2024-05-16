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
    int count(ListNode* &head){
        int i=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            i++;
        }
        return i;
    }
    ListNode* deleteMiddle(ListNode* head) {
        int n=count(head);
        int mid=n/2;
        ListNode* temp=head;
        int i=1;
        if(head==NULL)return head;
        if(head->next==NULL)return NULL;
        while(i<mid){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        return head;
    }
};