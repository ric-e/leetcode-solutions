#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (char c: s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty()) {
                    return false;
                }

                if (c != opposite(stack.top())) {
                    return false;
                }

                stack.pop();
            }
        }
        return stack.empty();
    }

    char opposite(char s) {
        if (s == '(') {
            return ')';
        } else if (s == '{') {
            return '}';
        } else {
            return ']';
        }
    }
};