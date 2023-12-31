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
        int c=0;
        while(head!=NULL){
          head=head->next;
            c++;
        }
        return c;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL)return head;
        
        int n=size(head);
        int loop=k%n;
         loop=n-loop;
        int j=0;
    
        if(n==1||loop==n)return head;
          ListNode* temp=head;
        ListNode* firstnode=head;
        while(temp!=NULL){
             j++;
            if(j==loop){
                firstnode=temp->next;
                temp->next=NULL;
                
            }
            
            
                temp=temp->next;
            
        }
        temp=firstnode;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=head;
        return firstnode;
    }
};