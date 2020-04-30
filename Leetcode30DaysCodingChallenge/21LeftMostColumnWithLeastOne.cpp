//https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/530/week-3/3306/

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        
        vector<int> d = binaryMatrix.dimensions();
        int i= d[0]-1, j = d[1]-1;
        while(i>=0 && j>=0)
        {
            if(binaryMatrix.get(i,j)==0)
                i -=1;
            else
                j -=1;
        }
        if(j == d[1]-1)
            return -1;
        else
            return j+1;
    }
};