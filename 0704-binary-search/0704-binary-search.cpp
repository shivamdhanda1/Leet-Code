class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        while(low <= high) {
            int l = (low + high) / 2;
            if(nums[l] == target) return l;
            else if(nums[l] > target) high = l -1;
            else {
                low = l + 1;
            }
        }
        return -1;
    }
};