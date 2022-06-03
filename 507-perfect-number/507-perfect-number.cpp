class Solution {
public:
    bool checkPerfectNumber(int num) {
       long int sum=0,temp;
        temp=num;
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                sum=sum+i;
            }
        }
        if(temp==sum) return true;
        else return false;
    }
};