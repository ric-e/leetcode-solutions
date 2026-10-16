#include <cmath>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int x = sqrt(n * (n + 1) / 2);

        if (x * x == n * (n + 1) / 2) {
            return x;
        }

        return -1;
    }
};