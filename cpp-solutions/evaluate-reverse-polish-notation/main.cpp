#include <vector>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> values;
        for (string t: tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int right = values.top(); values.pop();
                int left = values.top(); values.pop();
                int result;
                switch(t[0]) {
                    case '+': result = left + right; break;
                    case '-': result = left - right; break;
                    case '*': result = left * right; break;
                    case '/': result = left / right; break;
                    default: break;
                }
                values.push(result);
            } else {
                values.push(stoi(t));
            }
        }
        return values.top();
    }
};