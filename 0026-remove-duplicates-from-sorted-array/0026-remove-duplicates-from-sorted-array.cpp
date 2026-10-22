class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int l = nums[0];
     int count = 0;
     for(int i = 1; i < nums.size(); i++) {
       if(nums[i] == l) {
        continue;
       }
       else {
        count++;
      nums[count] = nums[i];
      l = nums[i];
       }
     }
     return count+1;
    }
};