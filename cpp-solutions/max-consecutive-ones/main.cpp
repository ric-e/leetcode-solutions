#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count += 1;
            } else {
                max_count = max(max_count, count);
                count = 0;
            }
        }
        return max(max_count, count);
    }
};