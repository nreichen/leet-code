class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceSeen = INT_MAX;
        int maxProfit = 0;
        
        for (int x: prices) {
            minPriceSeen = min(minPriceSeen, x);
            maxProfit = max(maxProfit, (x - minPriceSeen));
        }
        return max(maxProfit, 0);
    }
};