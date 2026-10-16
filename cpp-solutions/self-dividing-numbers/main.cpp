#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> self_dividing_numbers;

        for (int i = left; i <= right; i++) {
            bool self_dividing = true;
            int num = i;

            while (num > 0) {
                int digit = num % 10;

                if (digit == 0 || i % digit != 0) {
                    self_dividing = false;
                    break;
                }

                num /= 10;
            }

            if (self_dividing) {
                self_dividing_numbers.push_back(i);
            }
        }

        return self_dividing_numbers;
    }
};