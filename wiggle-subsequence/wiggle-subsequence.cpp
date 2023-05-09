class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        int increasing=1, decreasing=1;
        for(int i=1; i<nums.size();i++){
            if(nums[i]>nums[i-1])
             increasing = decreasing+1;
            else if(nums[i]<nums[i-1])
             decreasing = increasing+1;
        }
        return max(increasing,decreasing);
    }
};