class Solution {
public:
    int countsubarrays(vector<int>& nums, int k){
                //sliding window+two pointers
        int count=0;
        int i=0,j=0;
        int n=nums.size();
        map<int,int> mp;
        while(j<n){
             mp[nums[j]]++;
             while(mp.size()>k){
                 mp[nums[i]]--;
                 if(mp[nums[i]]==0){
                    mp.erase(nums[i]);
                 }
                 i++;
             }
            count=count+(j-i+1);
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        //sliding window+two pointers
        int ans=countsubarrays(nums,k)-countsubarrays(nums,k-1);
        return ans;
    }
};