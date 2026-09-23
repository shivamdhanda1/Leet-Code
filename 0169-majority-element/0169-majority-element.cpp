class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(int l : nums) {
            if(count == 0) {
                candidate = l;
            }
            if( l == candidate ) {
                count++;
            
            }
             else {
                count--;
             }

        }
        return candidate;
    }
};