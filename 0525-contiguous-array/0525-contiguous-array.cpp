class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //Generate all the subarrays.count the number of zeroes and ones in all the subarrays and then return the answer (BRUTEFORCE)
        // Prefix sum
        unordered_map<int,int> mp;
        int maxl=0;
        int sum=0;
        mp[0]=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                sum+=-1;
            }
            else if(nums[i]==1){
                sum+=1;
            }
            if(mp.find(sum)!=mp.end()){
                maxl=max(maxl,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return maxl;
    }
};