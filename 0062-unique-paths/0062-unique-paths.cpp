class Solution {
public:
    int uniquePaths(int m, int n) {
        int totalsteps=m+n-2;
        int right=n-1;
        double ans=1;
        for(int i=1;i<=right;i++){
            ans=ans*(totalsteps-right+i)/i;
        }
        return int(ans);
    }
};