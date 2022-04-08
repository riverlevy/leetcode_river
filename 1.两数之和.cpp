/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     int i,j;
    //     for(i=0;i<nums.size()-1;i++)
    //     {
    //         for(j=i+1;j<nums.size();j++)
    //         {
    //             if(nums[i]+nums[j]==target)
    //             {
    //                return {i,j};
    //             }
    //         }
    //     }
    //     return {i,j};
    // };
    //暴力法
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> a;
        vector<int> result(2,-1);
        for(int i =0;i<nums.size();i++)
        {
            if(a.count(target-nums[i])>0)
            {
                result[0] = a[target-nums[i]];
                result[1] = i;
                break;
            }
            a[nums[i]] = i;
            //将未成功的历史数据装载进map中。
        }
        return result;
    };
};
// @lc code=end

