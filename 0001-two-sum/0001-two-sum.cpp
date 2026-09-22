class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++) {
            int l = target - nums[i];
            if(map.find(l) != map.end()) {
                return {map[l],i};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};