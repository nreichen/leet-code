class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> v;
        for (int i = 0; i < nums.size(); i++) {
            int numLookingFor = target - nums[i];
            if (m.find(numLookingFor) != m.end()) {
                v.push_back(i);
                v.push_back(m[numLookingFor]);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};