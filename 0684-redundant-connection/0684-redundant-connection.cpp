class Solution {
public:
    int findparent(int element,vector<int>&ds){
        if(ds[element]==element)return element;
        return findparent(ds[element],ds);
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> ds(n+1);
        for(int i=0;i<=n;i++){
            ds[i]=i;//parent of itself
        }
        for(vector<int> v:edges){
            int el1=v[0];
            int el2=v[1];
            int p1=findparent(el1,ds);
            int p2=findparent(el2,ds);
            if(p1==p2)return v;
            else{
                ds[p2]=p1;
            }
            
    }
        return {};
    }
        
};