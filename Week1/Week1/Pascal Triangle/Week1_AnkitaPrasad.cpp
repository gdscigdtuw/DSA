class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> number;
        if (!numRows) 
            return number;
        
        number.push_back({1});
        
        for (int i = 1; i < numRows; i++) {
            vector<int> t(i+1,1);
            for (int j = 1; j < i; j++)
                t[j] = number[i-1][j-1] + number[i-1][j];
            number.push_back(t);
        }
        return number; 
    }
};