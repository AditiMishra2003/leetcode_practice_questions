class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int start=queries[i][0];
            int end=queries[i][1];
            int ans_xor=0;
            for(int j=start;j<=end;j++){
                ans_xor=ans_xor^arr[j];
            }
            ans.push_back(ans_xor);
        }
        return ans;
    }
};