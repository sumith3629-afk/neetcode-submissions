class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long p = 1;
        int zeros = 0;
        vector<int> out;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0)
                zeros++;
        }
        if (zeros >= 2)
            return vector<int>(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0)
                p *= nums[i];
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (zeros == 0)
                out.push_back(p / nums[i]);
            else if (nums[i] == 0)
                out.push_back(p);
            else
                out.push_back(0);
        }
        return out;
    }
};