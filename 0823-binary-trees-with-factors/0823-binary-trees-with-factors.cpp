class Solution {
public:
    int mod=1000000007;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<long long,long long>dp;
        for(long long i=0;i<arr.size();i++){
            dp[arr[i]]=1;
        }
        for(int i=1;i<arr.size();i++){
            for(int j=i-1;j>=0;j--){
                if(arr[i]%arr[j]==0){
                    int rig=arr[i]/arr[j];
                   if(dp[rig])
                   dp[arr[i]]=(dp[arr[i]]+(dp[arr[j]]*dp[rig]))%mod;
                }
            }
        }
        int sum=0;
        for(long long i=0;i<arr.size();i++)
            sum=(sum+dp[arr[i]])%mod;
        return sum;
    }
};