class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=0;
        for(j;j<nums.size();j++){
            if(nums[j]%2==0){
                swap(nums[j],nums[i]) ;
                    i++;
            }
        }
        return nums;
    }
};