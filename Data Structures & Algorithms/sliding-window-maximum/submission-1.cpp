class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        for (int right = 0; right < nums.size(); ++right) {

            // 1. Remove indices outside the window
            while (!dq.empty() && dq.front() <= right - k) {
                dq.pop_front();
            }

            // 2. Remove smaller or equal elements
            while (!dq.empty() && nums[dq.back()] <= nums[right]) {
                dq.pop_back();
            }

            // 3. Insert the current index
            dq.push_back(right);

            // 4. Store maximum when the window is full
            if (right >= k - 1) {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};