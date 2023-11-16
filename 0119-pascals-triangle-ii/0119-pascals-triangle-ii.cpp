class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        long long ans=1;
        temp.push_back(1);
        for(int i=0;i<rowIndex;i++){
            ans=ans*(rowIndex-i);
            ans=ans/(i+1);
            temp.push_back(ans);
        }
        return temp;
        
    }
};