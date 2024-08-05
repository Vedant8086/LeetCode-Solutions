class Solution {
    private : 
        void function_sort(vector<int>& nums) {
            sort(nums.begin(),nums.end());
        }
        int bubble(vector<int>& nums) {
            int size = nums.size(),j;
            for(int i =0;i<size;i++) {
                bool swapped = false;
                for(j = 0 ;j < size - i - 1;j++) {
                    if(nums[j] > nums[j+1]) {
                        swap(nums[j],nums[j+1]);
                        swapped = true;
                    }
                }
                if(swapped == false) {
                    break;
                }
            }
            return 0;
        }

public:
    void sortColors(vector<int>& nums) {
        bubble(nums);
    }
};