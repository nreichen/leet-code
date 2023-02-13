class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> results(numRows);
        results[0] = {1};
        if (numRows == 1) return results;
        results[1] = {1, 1};
        
        for (int i = 2; i < numRows; i++) {
            vector<int> prevRow = results[i - 1];
            vector<int> newRow(prevRow.size() + 1);
            newRow[0] = newRow[prevRow.size()] = 1;
            for (int j = 1; j < prevRow.size(); j++) {
                newRow[j] = prevRow[j - 1] + prevRow[j];
            }
            results[i] = newRow;
        }
        
        return results;
    }
};