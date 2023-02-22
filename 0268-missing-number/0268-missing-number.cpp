class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int memoSize = nums.size() + 1;
        vector<int> memo(memoSize, 1);
        for (auto num: nums) {
            memo[num]--;
        }
        for (int i = 0; i < memo.size(); i++) {
            if (memo[i] == 1) return i;
        }
        return 0;
    }
};