#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        std::string str = std::to_string(x);
        std::string reversed = str;

        std::reverse(reversed.begin(), reversed.end());

        return str == reversed;
    }
};