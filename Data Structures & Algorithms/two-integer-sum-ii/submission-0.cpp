class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        std::vector<int> out;
        int  left = 0;
        int right = numbers.size() - 1;
        while(left < right){
            if(numbers[left] + numbers[right] < target){
                left++;
            }
            else if(numbers[left] + numbers[right] > target){
                right--;
            }
            else if(numbers[left] + numbers[right] == target){
                out.push_back(left+1);
                out.push_back(right + 1);
                break;
            }            
        }
        return out;
    }
};
