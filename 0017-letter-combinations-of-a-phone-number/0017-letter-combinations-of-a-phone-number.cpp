class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> output;
        if (digits == "") return output;
        map<int, vector<char>> memo = initializeMemo();
        string currString = "";
        backtracking(memo, output, currString, digits, digits.length(), 0);
        return output;
    }

    void backtracking(map<int, vector<char>>& memo, vector<string>& output, string& currString, string digitsString, int maxLength, int currDigitIndex) {
        if (currString.length() == maxLength) {
            output.push_back(currString);
        }
        else {
            // for each currDigit, loop through its corresponding 3 letters, adding each to the currString.
            // backtrack for each letter added
            int currDigit = int(digitsString[currDigitIndex]) - 48;
            for (int i = 0; i < memo[currDigit].size(); i++) {
                currString.push_back(memo[currDigit][i]);
                backtracking(memo, output, currString, digitsString, maxLength, currDigitIndex + 1);
                currString.pop_back();
            }
        }
    }
                                     
    map<int, vector<char>> initializeMemo() {
        map<int, vector<char>> memo;
        for (int i = 2; i <= 6; i++) {
            for (int j = 0; j < 3; j++) {
                memo[i].push_back(char(97 + j + ((i - 2) * 3)));
            }
        }
        memo[7] = {'p', 'q', 'r', 's'};
        memo[8] = {'t', 'u', 'v'};
        memo[9] = {'w', 'x', 'y', 'z'};
        return memo;
    }
    
};