class Solution {
public:
    bool isPerfectSquare(int num) {
       long int mid, start=0, end=num,ans;
       
        while(start<=end){
             mid = (start - end)/2 + end;
            if(mid*mid > num){
                end = mid-1;
            }
            else if(mid*mid == num){
                return true;
            }
            else{
                start = mid+1;
            }
        }
        return false;
    }
};