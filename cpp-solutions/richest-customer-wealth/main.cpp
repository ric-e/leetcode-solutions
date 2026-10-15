#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int most_wealth = 0;
        for (const auto& customer: accounts) {
            int customer_wealth = 0;
            for (const auto& value: customer) {
                customer_wealth += value;
            }
            if (customer_wealth >= most_wealth) { most_wealth = customer_wealth; }
        }
        return most_wealth;
    }
};