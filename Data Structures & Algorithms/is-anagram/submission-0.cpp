class Solution {
public:
    bool isAnagram(string s, string t) {
        std::vector<int> si;
        std::vector<int> ti; 
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0 ; i < s.size() ; ++i){
            si.push_back(int(s[i]));
            ti.push_back(int(t[i]));
        }
        sort(si.begin() , si.end());
        sort(ti.begin() , ti.end());
        if(si == ti){
            return true;
        }
        return false;
    }
};
