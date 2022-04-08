/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        int number = m + n - 2;
        int data = m<n?m:n;
        long Up_num=1;
        long Down_num=1;//定义分子分母,有可能数值很大
        for(int i=1;i<data;i++)
        {
            Down_num*=i;
            Up_num*=number;
            number--;
        }
        return Up_num/Down_num;
    }
};
// @lc code=end

