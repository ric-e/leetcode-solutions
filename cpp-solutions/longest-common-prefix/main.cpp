#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            for (int j = 0; j < prefix.size(); j++) {
                if (j >= strs[i].size() || strs[i][j] != prefix[j]) {
                    prefix.erase(j);
                    break;
                }
            }
        }

        return prefix;
    }
};