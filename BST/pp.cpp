#include <vector>
using namespace std;

class Solution {
public:
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        vector<int> ans;
        for (const auto& query : queries) {
            int ai = query[0];
            int bi = query[1];
            if (ai == bi) {
                ans.push_back(ai);
                continue;
            }
            int leftmost = -1;
            for (int j = max(ai, bi) + 1; j < heights.size(); ++j) {
                if (heights[ai] < heights[j] && heights[bi] < heights[j]) {
                    leftmost = j;
                    break;
                }
            }
            ans.push_back(leftmost);
        }
        return ans;
    }
};