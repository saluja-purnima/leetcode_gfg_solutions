class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> temp;
        int sum=0;
        for(int i=0; i<nums.size();i++){
            sum = nums[i] + sum;
            temp.push_back(sum);
        }
        nums=temp;
        return nums;
    }
};