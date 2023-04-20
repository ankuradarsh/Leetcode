class Solution {
    public int[] searchRange(int[] nums, int target) {
        int start=0, end = nums.length-1;
        int a[] = {-1,-1};
        while(start<=end){
            if(nums[start]==target && nums[end]==target){
                a[0]=start;
                a[1]=end;
                break;
            } else if(nums[start]==target && nums[end]!=target){
                end--;
            } else {
                start++;
            }
        }
        return a;
    }
}