class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefixsum=0;
        int count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixsum=prefixsum+nums[i];
            int remove=prefixsum-k;
            count+=mp[remove];
            mp[prefixsum]+=1;
        }
         return count;
    }
};