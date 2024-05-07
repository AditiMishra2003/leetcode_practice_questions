class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();
       int xor1=nums1[0];
        int xor2=nums2[0];
       for(int i=1;i<n1;i++){
           xor1=xor1^nums1[i];
       }
        int ans1=xor1;
        for(int j=1;j<n2;j++){
            ans1=ans1^xor1;
        }
        for(int i=1;i<n2;i++){
            xor2=xor2^nums2[i];
        }
        int ans2=xor2;
        for(int j=1;j<n1;j++){
            ans2=ans2^xor2;
        }
        return ans1^ans2;
    }
};