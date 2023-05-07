class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int> res, d;
        for (int i = 0; i < obstacles.size(); ++i) {
            auto it = upper_bound(d.begin(), d.end(), obstacles[i]);
            if (it == d.end()) {
                d.push_back(obstacles[i]);
                res.push_back(d.size());
            } else {
                *it = obstacles[i];
                res.push_back(it - d.begin() + 1);
            }
        }
        return res;
    }
};
