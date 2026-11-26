class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }

        unordered_set<int> s(nums.begin(), nums.end());
        nums.assign(s.begin(), s.end());

        sort(nums.begin(), nums.end());

        int max_len = 1;
        int len = 1;

        for(int i = 0; i < nums.size() - 1; ++i){
            if((long long)nums[i+1] == (long long)nums[i] + 1){
                len += 1;
            }
            else{
                len = 1;
            }

            max_len = max(len, max_len);
        }

        return max_len;
    }
};