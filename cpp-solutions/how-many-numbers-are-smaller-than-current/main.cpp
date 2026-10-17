#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {
            int smaller = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    smaller += 1;
                }
            }
            answer.push_back(smaller);
        }
        return answer;
    }
};