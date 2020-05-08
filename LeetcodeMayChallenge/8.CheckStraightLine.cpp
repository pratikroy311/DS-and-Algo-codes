//https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        //slope(m1) = slope(m2)
        //m1 = y3-y2/x3-x2  ; m2 = y2-y1/x2-x1  {here division by zero problem}
        //y3-y2 * x2-x1 == y2-y1 * x3-x2 (cross multiplication)
        for(int i=2;i<coordinates.size();i++)
        {
            
            if ((coordinates[i][0] - coordinates[i - 1][0]) * (coordinates[i - 1][1] - coordinates[i - 2][1]) !=
                (coordinates[i - 1][0] - coordinates[i - 2][0]) * (coordinates[i][1] - coordinates[i - 1][1]))
                return false;
        }
        return true;
    }
};