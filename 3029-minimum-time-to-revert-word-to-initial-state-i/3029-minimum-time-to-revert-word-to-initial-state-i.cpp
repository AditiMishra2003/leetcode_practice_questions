class Solution {
public:
    bool check(string word,string target){
        int n=word.size();
        for(int i=0;i<n;i++){
            if(target[i]!='*'&&word[i]!=target[i]){
                return false;
            }
        }
        return true;
    }
    int minimumTimeToInitialState(string word, int k) {
        int n=word.size();
        int c=0;
        string copy=word;
        do{
           copy=copy.substr(k)+string(k ,'*');
           c++;
        }while(!check(word,copy));
        return c;
    }
};