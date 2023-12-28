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
    int countnodes(ListNode* head){
        int count=0;
        while(head!=NULL){
            count++;
            head=head->next;
        
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int m=countnodes(head);
        int mid=(m/2)+1;
        int i=0;
        while(head!=NULL){
            i++;
            if(i==mid)return head;
            head=head->next;
            
        }
        return head;
        
    }
};