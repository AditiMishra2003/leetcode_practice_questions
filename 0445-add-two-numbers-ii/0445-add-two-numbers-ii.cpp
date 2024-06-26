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
   ListNode* reverse(ListNode* head){
       ListNode* prev=NULL;
       ListNode* curr=head;
       while(curr!=NULL){
           ListNode* forward=curr->next;
           curr->next=prev;
           prev=curr;
           curr=forward;
       }
       return prev;
   }
   void insertattail(ListNode* &head,ListNode* &tail,int val){
        ListNode* temp=new ListNode(val);
        
        if(head==NULL){
            head=temp;
            tail=temp;
            return;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    ListNode* add(ListNode* &l1,ListNode* &l2){
        int carry=0;
        ListNode* anshead=NULL;
        ListNode* anstail=NULL;
        
        while(l1!=NULL && l2!=NULL){
            int sum=l1->val+l2->val+carry;
            int digit=sum%10;
            
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int sum=carry+l1->val;
            int digit=sum%10;
            
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            l1=l1->next;
        }
        while(l2!=NULL){
            int sum=carry+l2->val;
            int digit=sum%10;
            
            insertattail(anshead,anstail,digit);
            carry=sum/10;
            l2=l2->next;
        }
        while(carry!=0){
            int sum=carry;
            int digit=sum%10;
            insertattail(anshead,anstail,digit);
            carry=sum/10;
        }
        return anshead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1= reverse(l1);
        l2=reverse(l2);
        ListNode* ans=add(l1,l2);
        ans=reverse(ans);
        return ans;
    }
};