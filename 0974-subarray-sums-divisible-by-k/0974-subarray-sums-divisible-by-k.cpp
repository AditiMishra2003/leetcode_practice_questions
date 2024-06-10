class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        //Bruteforce Generate all the subarrays and cound TC=O(n^2)
        //optimised use map and store the freq of remainder
        unordered_map<int,int> mp;
        int ans=0;
        int n=nums.size();
        int sum=0;
        int rem=0;
        mp[rem]++;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            rem=sum%k;
            if(rem<0){
                rem=rem+k;
            }
            if(mp.find(rem)!=mp.end()){
            ans+=mp[rem];
            }
            mp[rem]++;
        }
        return ans;
    }
};