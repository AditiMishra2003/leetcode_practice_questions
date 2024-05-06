class Solution {
public:
    int minFlips(int a, int b, int c) {
       
        int res=0;
        //count set bits in a , b and c
        for(int i=0;i<32;i++){
        bool x=false;
        bool y=false;
        bool z=false;
            if(a&(1<<i))x= true;
             if(b&(1<<i))y= true;
             if(c&(1<<i))z= true;
            if(z==false){
                if(x==true&y==true)res=res+2;
                else{
                    if(x==true||y==true)res=res+1;
                }
            }
            else{
                if(x==false&&y==false)res=res+1;
            }
        }
       return res;     
    }
};