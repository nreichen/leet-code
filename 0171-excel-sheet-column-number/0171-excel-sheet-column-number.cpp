class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for (char x: columnTitle) {
            int y = x - 'A' + 1;
            result = result * 26 + y; 
        }
        return result; 
    }
};