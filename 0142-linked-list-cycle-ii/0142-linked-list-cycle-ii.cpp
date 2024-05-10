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
    //space complexity= O(n)
    ListNode* getintersection(ListNode* head){
         ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL)return NULL;
        while(slow!=NULL&& fast!=NULL){
            fast=fast->next;
            if(fast!=NULL)fast=fast->next;
            slow=slow->next;
            if(slow==fast)return slow;
        }
        return NULL;
    }
    ListNode *detectCycle(ListNode *head) {
      /***  unordered_set<ListNode*> set;
        ListNode* curr=head;
        while(curr!=NULL){
            if(set.find(curr)!=set.end()){
                return curr;
            }
            else{
                set.insert(curr);
                curr=curr->next;
            }
        }
        return NULL;***/
          
        if(head==NULL)return NULL;
        ListNode* intersection=getintersection(head);
        if(intersection==NULL)return NULL;
        ListNode* start=head;
        while(start!=intersection){
            start=start->next;
            
            intersection=intersection->next;
        }
        return intersection;
        
    
    }
};