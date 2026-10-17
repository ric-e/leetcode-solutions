#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> doubleVector;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < nums.size(); j++) {
                doubleVector.push_back(nums[j]);
            }
        }
        return doubleVector;
    }
};