/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int  max=1<<31;
        for(auto head = nums.begin();head!=nums.end();head++)
        { 
            sum = sum + *head;
            max = max > sum ? max : sum;
            if (sum < 0)
                sum = 0;
        }
        return max;
    }
};
// @lc code=end

