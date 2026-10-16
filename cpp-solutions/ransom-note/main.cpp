#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<char> note(ransomNote.begin(), ransomNote.end());
        vector<char> mag(magazine.begin(), magazine.end());

        for (char c : note) {
            auto it = find(mag.begin(), mag.end(), c);

            if (it == mag.end()) {
                return false;
            }

            mag.erase(it);
        }

        return true;
    }
};