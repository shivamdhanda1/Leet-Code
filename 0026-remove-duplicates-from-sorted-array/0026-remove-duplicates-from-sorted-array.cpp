class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(auto it : nums) {
            mp[it];
        }
         auto it = mp.begin();

        for(int i = 0; i < nums.size(); i++) {  
            if(it == mp.end()) {
                break;
            }
            nums[i] = it->first;
            it++;

        }
        return mp.size();
    }
};