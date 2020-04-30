//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/531/week-4/3312/

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row = matrix.size();
        if (row == 0)
            return 0;
        int col = matrix[0].size();
        if (col == 0)
            return 0;
            
        int max_len = 0;
        vector<vector<int>> dp(row, vector<int>(col, 0));
        
        for (int i = 0; i < col; i++)
        {
            if (matrix[0][i] == '1')
            {
                dp[0][i] = 1;
                max_len = 1;
            }
        }
            
        for (int i = 0; i < row; i++)
        {
            if (matrix[i][0] == '1')
            {
                dp[i][0] = 1;
                max_len = 1;
            }
        }
            
        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col;j++)
            {
                if (matrix[i][j] == '0')
                    continue;
                
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]);
                dp[i][j] = min(dp[i][j], dp[i-1][j-1]) + 1;
                
                max_len = max(max_len, dp[i][j]);
            }
        }
        
        return max_len * max_len;
    }
};