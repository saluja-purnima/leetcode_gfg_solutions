class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,digit=0,product=1,sub=0;
       while(n>0){
        digit = n%10;
        sum = sum + digit;
        product = product* digit;
        n = n/10;
       } 
         
        return (product - sum);
    }
    
};
