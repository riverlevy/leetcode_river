/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        if(right<left)
        {
            return 0;
        }
        else if(left == right)
        {
            if(target>nums[0])
                return 1;
            else
                return 0;
        }
        while(left<=right)
        {
            int temp = (left+right)/2;
            if(target==nums[temp])
            {
                return temp;
            }
            else if(target>nums[temp])
            {
                left = temp+1;
            }
            else
            {
                right = temp-1;
            }
        }
        return left;
    }
};
// @lc code=end

