/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution 
{
public:
    int maxArea(vector<int>& height) {
        int vol = 0;
        int max = 0;
        int j = height.size()-1;
        int i =0;
        while(i<j)
        {
            if(height[i]>height[j])
            {
                vol = height[j]*(j-i);
                j--;                
            }
            else
            {
                vol = height[i]*(j-i);
                i++;
            }
            max = max>vol?max:vol;
        }
        return max;

    }
};
// @lc code=end

