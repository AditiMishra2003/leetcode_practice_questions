class Solution {
public:
    int longestPalindrome(string s) {
          int n=s.length();
          unordered_map<char,int> freq;
        for(auto x:s){
            freq[x]++;
        }
        int ans=0;
        bool isodd=false;
        for(auto [x,fr]:freq){
            if(fr%2==0)ans+=fr;
            else{
                ans+=fr-1;
                isodd=true;
            }
        }
        
        return isodd?ans+1:ans;
    }
};