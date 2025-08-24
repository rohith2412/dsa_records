#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

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

int main() {
    Solution sol;
    vector<string> strs = {"rock", "roc", "ro"};

    string result = sol.longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << result << endl;

    return 0;
}
