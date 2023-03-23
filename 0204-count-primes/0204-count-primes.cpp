class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;
        vector<bool> memo(n, true);
        int count = 1;
        memo[0] = false;
        memo[1] = false;
        
        for (int i = 3; i < n; i += 2) {
            if (memo[i]) {
                count++;
                for (int j = 2; j * i < n; j++) {
                memo[i * j] = false;
                }
            }
        }
        return count;   
    }
};