/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n,vector<int>(n));
        int up,left,down,right;
        up=left = 0;
        down=right = n-1;
        int index = 1;
        while(up<=down && left<=right)
        {
            for(int i = left; i<=right; i++)
                result[up][i] = index++;
            up++;
            for(int i =up; i<=down; i++)
                result[i][right]= index++;
            right--;
            for(int i =right; i>=left; i--)
                result[down][i]= index++;
            down--;
            for(int i =down; i>=up; i--)
                result[i][left]= index++;
            left++;
        } 
        return result;
    }
};
// @lc code=end

