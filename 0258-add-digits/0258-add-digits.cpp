class Solution {
public:
    int helper(int num){
        int sum=0;
        while(num>0){
            int digit=num%10;
            sum=sum+digit;
            num=num/10;
        }
        return sum;
    }
    int addDigits(int num) {
        while(num>9){
            num=helper(num);
        }
        return num;
    }
};