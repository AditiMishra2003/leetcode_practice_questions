class Solution {
public:
    void findsubsets(int index,vector<int>& arr,vector<int>& ds,vector<vector<int>>& ans){
    ans.push_back(ds);
        for(int i=index;i<arr.size();i++){
        if(i!=index&&arr[i-1]==arr[i])continue;
        ds.push_back(arr[i]);
        findsubsets(i+1,arr,ds,ans);
        ds.pop_back();
        }
    
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        findsubsets(0,nums,ds,ans);
        return ans;
    }
};