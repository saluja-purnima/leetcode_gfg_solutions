class Solution {
public:
    int reverse(int x) {
        long int rem = 0, rev =0;
        while(x!=0){
            rem = x%10;
            rev = rev*10 + rem;
            x /=10;
        }
        if(rev<INT_MIN || rev>INT_MAX) return 0;
        else return rev;
        
    }
};