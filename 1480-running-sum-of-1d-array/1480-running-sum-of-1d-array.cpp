class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        int i=0, j=0, sum=0,value;
        for(i=0; i<nums.size();i++){
            value = nums[i] + sum;
            sum = value;
            temp.push_back(value);
        }
        nums=temp;
        return nums;
    }
};