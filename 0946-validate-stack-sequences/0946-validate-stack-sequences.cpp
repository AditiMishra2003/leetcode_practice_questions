class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int n1=pushed.size();
        int n2=popped.size();
        int i=0,j=0;
        while(i<n1&&j<n2){
            if(st.empty()||st.top()!=popped[j]){
                st.push(pushed[i]);
                i++;
            }
            else if(st.top()==popped[j]){
                st.pop();
                j++;
            }
        }
        while(j<n2){
            if(st.size()&&st.top()==popped[j]){
                st.pop();
                j++;
            }
            else{
                break;
            }
        }
        return st.empty();
    }
};