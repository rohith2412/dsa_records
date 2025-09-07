//Longest Common Prefix Problem

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last = strs.back();
        string prefix = "";

        for (int i = 0; i < first.size(); i++) {
            if (first[i] == last[i]) {
                prefix += first[i];
            } else {
                break;
            }
        }
        return prefix;
    }
};


//explanation:
