/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
// class Solution {
// public:
// 	int removeElement(vector<int>& nums, int val) {
// 		int begin = 0;
// 		int end = nums.size();
// 		if (end == 0)
// 			return 0;
// 		else
// 			end--;
// 		while (nums[end] == val)
// 		{
// 			if (end > 0)
// 				end--;
// 			else
// 				return 0;
// 		}
// 		if (end<0)
// 			return 0;
// 		while (begin < end)
// 		{
// 			while (nums[end] == val && end > 0)
// 			{
// 				end--;
// 			}
// 			while (nums[begin] != val)
// 			{
//                 if(begin < nums.size()-1)
// 				    begin++;
//                 else
// 				    return begin+1;
// 			}
// 			if (end>begin)
// 			{
// 				swap(nums[begin], nums[end]);
// 			}
// 		}
// 		return end+1;
// 	}
// };

//双指针法
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int right = 0;
		int left = 0; 
		int end = nums.size()-1;
		for(;right<=end;right++)
		{
			while(val ==nums[right])
			{
				if(right<end)
					right ++;
				else
					return left;
			}
			nums[left] = nums[right];
			left++;
		}
		return left;
    }
};
// @lc code=end

