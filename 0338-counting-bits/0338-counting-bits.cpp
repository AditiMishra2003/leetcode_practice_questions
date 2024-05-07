class Solution {
public:
    int countsetbits(int n){
        int cnt=0;
        while(n>1){
            if(n&1)cnt+=1;
            n=n>>1;
        }
        if(n==1)cnt+=1;
        return cnt;
    }
    vector<int> countBits(int n) {
        //count setbits in i
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
           int x=countsetbits(i);
           ans.push_back(x);
        }
        return ans;
    }
};