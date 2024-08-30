class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int sizes = nums.size();
        if(sizes == 1) return;
        int jump = 0;
        for(int i = 0;i < sizes;i++) {
            if(nums[i] != 0) {
                swap(nums[jump],nums[i]);
                jump++;
            }
        }
    }
};