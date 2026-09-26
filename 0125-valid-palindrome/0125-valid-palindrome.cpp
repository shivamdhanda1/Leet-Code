class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(char &c : s) {
            c = tolower(c);
        }
        for(char c : s) {
            if(isalnum(c)) {
            ans += c;
            }
        }
        string rev = ans;
         reverse(rev.begin(),rev.end());
         if(ans == rev) {
            return true;
         } 
         return false;
        
    }
};