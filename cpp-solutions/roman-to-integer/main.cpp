#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int previous = 0;
        int current = 0;
        int sum = 0;
        for (int i =0; i < s.size(); i++) {
            if (previous != 0 && parseRoman(s[i]) > previous) {
                current = parseRoman(s[i]) - previous;
                sum -= previous; // removes previous integer added (otherwise our math is wrong)
            } else {
                current = parseRoman(s[i]);
            }
            sum += current;
            previous = parseRoman(s[i]);
        }

        return sum;
    }

    int parseRoman(char c) {
        switch (c) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
};