class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0,l=0,r=0,zero=0;
        int n=nums.size();
        while(r<n){
             if(nums[r]==0){
                zero++;
             }
            while(zero>k){
                if(nums[l]==0)zero--;
                l++;
            }
            if(zero<=k){
                int len=r-l+1;
                maxlen=max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};