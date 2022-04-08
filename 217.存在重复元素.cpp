/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //hash算法
        unordered_set<int> s;
        for(auto data = nums.begin();data!=nums.end();data++)
        {
            if(s.find(*data)!= s.end())
                return true;
            else
                s.insert(*data);
        }
        return false;
    }
};
// @lc code=end

