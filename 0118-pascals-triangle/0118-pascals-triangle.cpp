class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> results(numRows);
        results[0] = {1};
        if (numRows == 1) return results;
        results[1] = {1, 1};
        
        for (int i = 2; i < numRows; i++) {
            vector<int> newRow(i + 1);
            newRow[0] = newRow[i] = 1;
            for (int j = 1; j < i; j++) {
                newRow[j] = results[i - 1][j - 1] + results[i - 1][j];
            }
            results[i] = newRow;
        }
        return results;
    }
};