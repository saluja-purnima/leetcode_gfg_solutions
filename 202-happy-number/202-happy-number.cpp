class Solution {
public:
    bool isHappy(int n) {
        long digit=0,sum=0;
        while(n>9){
            while(n){
                digit = n%10;
                sum= sum + (digit*digit);
                n = n/10;
            }
            n= sum;
            sum=0;
        }
        if(n==1||n==7) return true;
        else return false;
    }
};