class Solution {
public:
    int mySqrt(int x) {
        long start=0,end=x,ans,mid;
        
        while(start<=end){
            mid= (start-end)/2 + end;
            if((mid*mid) == x){
                return mid;
                }
            else if((mid*mid) < x){
                start= mid+1;
                ans = mid;
            }
           
            else{
                end=mid-1;
            }
           
         }
        return ans;
    }
};