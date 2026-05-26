class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> an;

        unordered_map<int,int> mp;

        for(auto it : nums1) {
            mp[it] = 1;
        }

        for(auto l : nums2) { 
         if(mp[l] == 1) {
            mp[l]++;
         }
        
            
        }

        for(auto &i : mp) {
            if(i.second > 1) {
                an.push_back(i.first);
            }
        }
        return an;
    }
};