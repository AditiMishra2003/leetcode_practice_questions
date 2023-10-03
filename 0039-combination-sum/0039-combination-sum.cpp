class Solution {
public:
    void findcombination(int ind,int target,vector<int> &candidate,vector<vector<int>> &ans,vector<int> &ds){
        if(ind==candidate.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidate[ind]<=target){
            ds.push_back(candidate[ind]);
            findcombination(ind,target-candidate[ind],candidate,ans,ds);
            ds.pop_back();
        }
        findcombination(ind+1,target,candidate,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findcombination(0,target,candidates,ans,ds);
        return ans;
    }
};