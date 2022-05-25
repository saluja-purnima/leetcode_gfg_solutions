class Solution {
public:
    bool isPalindrome(int x) {
       long int rem=0, n=0,num;
        
        num=x;
        while(x>0){
        rem= x % 10;
        n = n*10 + rem;
         x /= 10;
        }
        
        return (n==num);
    }
};