#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> defaultTriangle = {{1}, {1,1}};
        if (numRows == 1) {
            return {{1}};
        } else if (numRows == 2) {
            return defaultTriangle;
        }

        while (numRows > 2) {
            vector<int> row = {1};
            for (int i = 1; i < defaultTriangle.back().size(); i++) {
                row.push_back(defaultTriangle.back()[i] + defaultTriangle.back()[i-1]);
            }
            row.push_back(1);
            defaultTriangle.push_back(row);
            numRows -= 1;
        }
        return defaultTriangle;
    }
};