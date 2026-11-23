class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& [num, count] : freq) {
            buckets[count].push_back(num);
        }
        vector<int> ans;
        for (int count = nums.size(); count >= 1; --count) {
            for (int num : buckets[count]) {
                ans.push_back(num);
                if (ans.size() == k)
                    return ans;
            }
        }
        return ans;
    }
};