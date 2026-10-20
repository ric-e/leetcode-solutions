#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> s;
        int index = 1;
        for (int t: target) {
            while (index < t) {
                s.push_back("Push");
                s.push_back("Pop");
                ++index;
            }
            s.push_back("Push");
            ++index;
        }
        return s;
    }
};