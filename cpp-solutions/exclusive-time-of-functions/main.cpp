#include <vector>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> res(n,0);
        stack<pair<int,int>> starters;
        for (string l: logs) {
            size_t c1 = l.find(':');
            size_t c2 = l.find(':', c1 + 1);
            int id = stoi(l.substr(0,c1));
            string type = l.substr(c1 + 1, c2 - c1 - 1);
            int time = stoi(l.substr(c2 + 1));

            if (type == "start") {
                starters.push({id, time});
            } else {
                int startTime = starters.top().second;
                starters.pop();
                int duration = time - startTime + 1;
                if (!starters.empty()) {
                    res[starters.top().first] -= duration;
                }
                res[id] += duration;

            }
        }
        return res;
    }
};