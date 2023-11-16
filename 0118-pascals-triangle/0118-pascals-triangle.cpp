class Solution {
public:
    vector<int> generaterows(int N){
        vector<int> temp;
        int ans=1;
        temp.push_back(1);
        for(int col=1;col<N;col++){
            ans=ans*(N-col);
            ans=ans/col;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=1;i<=numRows;i++){
            ans.push_back(generaterows(i));
        }
        return ans;
    }
};