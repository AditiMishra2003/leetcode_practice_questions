class Solution {
public:
    bool valid(char ch){
        if((ch >='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9')){
            return 1;
             
        }
        return 0;
    }
    char tolowercase(char ch){
        if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
            return ch;
        }
        else{
            char temp=ch-'A'+'a';
            return temp;
        }
    }
    bool ispalindrome(string a){
        int s=0;
        int e=a.length()-1;
        while(s<=e){
            if(tolowercase(a[s])!=tolowercase(a[e]))return 0;
            else{
                s++;
                e--;
            }
        
        }
        return 1;
    }
   
    bool isPalindrome(string s) {
        //remove alphanumeric characters
        int i=0;
        string temp="";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        for(int j=0;j<temp.length();j++){
            temp[j]=tolowercase(temp[j]);
        }
        return ispalindrome(temp);
    }
};