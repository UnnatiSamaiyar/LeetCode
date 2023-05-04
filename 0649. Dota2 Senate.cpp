class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.length();
        queue<int> r_queue, d_queue; // keep track of the indices of the senators from each party
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R') {
                r_queue.push(i);
            } else {
                d_queue.push(i);
            }
        }
        while (!r_queue.empty() && !d_queue.empty()) {
            int r_index = r_queue.front();
            r_queue.pop();
            int d_index = d_queue.front();
            d_queue.pop();
            if (r_index < d_index) {
                r_queue.push(r_index + n); // senator from R party will ban senator from D party
            } else {
                d_queue.push(d_index + n); // senator from D party will ban senator from R party
            }
        }
        return r_queue.empty() ? "Dire" : "Radiant";
    }
};
