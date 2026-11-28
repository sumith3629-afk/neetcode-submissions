class Solution {
public:
    string minWindow(string s, string t) {
        if (t.empty() || t.size() > s.size())
            return "";
        unordered_map<char, int> required;
        unordered_map<char, int> window;
        for (char c : t) {
            required[c]++;
        }
        int have = 0;
        int need = required.size();
        int left = 0;
        int minLen = INT_MAX;
        int start = 0;
        for (int right = 0; right < s.size(); right++) {
            char c = s[right];
            window[c]++;
            if (required.count(c) && window[c] == required[c]) {
                have++;
            }
            while (have == need) {
                if (right - left + 1 < minLen) {
                    minLen = right - left + 1;
                    start = left;
                }
                char d = s[left];
                window[d]--;

                if (required.count(d) && window[d] < required[d]) {
                    have--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};