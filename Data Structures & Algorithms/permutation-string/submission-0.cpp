class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin() , s1.end());
        int k = s1.size();
        int left = 0;
        for(int right = k - 1 ; right < s2.size() ; ++right){
            std::string substr = s2.substr(left , k);
            sort(substr.begin() , substr.end());
            if(s1 == substr){
                return true;
            }
        left++;
        }
        return false;
    }
};
