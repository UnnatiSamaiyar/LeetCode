class Solution {
public:
    int maxLength(vector<string>& arr) {
        std::vector<int> masks; 
        for (const std::string& str : arr) {
            int mask = 0;
            bool isUnique = true;
            for (char ch : str) {
                int bit = 1 << (ch - 'a');
                if (mask & bit) {
                    isUnique = false;
                    break;
                }
                mask |= bit;
            }
            if (isUnique) {
                masks.push_back(mask);
            }
        }

        int result = 0;

        for (int i = 1; i < (1 << masks.size()); ++i) {
            int currentMask = 0;
            bool isValid = true;
            for (int j = 0; j < masks.size(); ++j) {
                if (i & (1 << j)) {
                    if (currentMask & masks[j]) {
                        isValid = false;
                        break;
                    }
                    currentMask |= masks[j];
                }
            }
            if (isValid) {
                result = std::max(result, __builtin_popcount(currentMask));
            }
        }

        return result;
    }
};
