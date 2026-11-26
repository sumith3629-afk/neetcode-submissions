class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin() , s.end() ,[](unsigned char(c)){return !isalnum(c);}),s.end());

        for(char &c : s){
            c = tolower(static_cast<unsigned char>(c));
        }
        for(int i = 0 ; i < s.size() / 2 ; ++i){
            if(s[i] != s[s.size()-i - 1]){
                return false;
            }
        }
        return true;
        
    }
};
