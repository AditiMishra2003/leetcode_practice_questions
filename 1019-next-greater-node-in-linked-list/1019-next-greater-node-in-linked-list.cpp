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
    
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        ListNode* temp=head;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        for(int i=0;i<=n-2;i++){
            int x=v[i];
            for(int j=i+1;j<=n-1;j++){
                if(v[j]>x){
                    v[i]=v[j];
                    break;
                }
              
            }
            if(v[i]==x)v[i]=0;
        }
        v[n-1]=0;
        return v;
    }
};