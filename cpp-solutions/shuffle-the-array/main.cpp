#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> shuffledVector;
        int half = nums.size() / 2;
        for (int i = 0; i < half; i++) {
            shuffledVector.push_back(nums[i]);
            shuffledVector.push_back(nums[half + i]);
        }
        return shuffledVector;
    }
};