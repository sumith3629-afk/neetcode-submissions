class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> mp; 
        std::vector<int> output;

        for(int i = 0 ; i < nums.size() ; ++i){
            int n2 = target - nums[i];
            if(mp.find(n2) != mp.end()){
                output.push_back(mp[n2]);
                output.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return output;
    } 
};
