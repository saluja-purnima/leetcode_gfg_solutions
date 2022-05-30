class Solution {
public:
    int numberOfSteps(int num) {
       long int count=0;
        while(num){
            if(num%2==0){
               num=num/2;
            }
            else{
                num--;
               
            }
            count++;
        }
        return count;
    }
};