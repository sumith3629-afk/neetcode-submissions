class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set < char> seen;
        int left = 0 ;
        int right = 0;
        int max_len = 0;
        int len = 0;
        for(right = 0 ; right < s.size() ; ++right){
            while(seen.count(s[right])){
                seen.erase(s[left]);
                left++;
            }
            seen.insert(s[right]);
            len = right - left + 1;
            max_len = max(len , max_len);
            
        }
        return max_len;
    }
};
