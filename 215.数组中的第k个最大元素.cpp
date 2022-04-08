/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

// @lc code=start
class Solution {
public:
	int findKthLargest(vector<int>& nums, int k) {
		int right = nums.size() - 1;
        spec_quick_sort(nums,0,right,k-1);
        //只对K-1，所在的数组区间进行排序
        //quick_sort(nums, 0, right);
		//big----little
		// sort(nums,k);
		return nums[k - 1];
	}
	void swap(int& a, int& b)
	{
		a = a + b;
		b = a - b;
		a = a - b;
	}
	// void sort(vector<int> &nums, int end)
	// 	//冒泡排序
	// {
	// 	int length = nums.size() - 1;
	// 	bool swapped = true;
	// 	for (int index = 0; index<end; index++)
	// 	{
	// 		int begin = length;
	// 		for (; begin>index; begin--)
	// 		{
	// 			if (nums[begin]>nums[begin - 1])
	// 			{
	// 				swap(nums[begin], nums[begin - 1]);
	// 				swapped = false;
	// 			}
	// 		}
	// 		while (swapped)
	// 		{
	// 			break;
	// 		}
	// 	}
	// }
	// void quick_sort(vector<int> &nums, int left, int right)
    ////快速排序
	// {
	// 	if (left == right)
	// 	{
	// 		return;
	// 	}
	// 	int pointer = left;
	// 	int base = nums[left];
	// 	bool swapped = false;
	// 	for (int p = left + 1; p <= right; p++)
	// 	{
	// 		if (nums[p]>base)
	// 		{
	// 			swapped = true;
	// 			if (p == pointer + 1)
	// 			{
	// 				pointer++;
	// 			}
	// 			else
	// 			{
	// 				swap(nums[++pointer], nums[p]);
	// 			}
	// 		}
	// 	}
	// 	if (swapped)
	// 	{
	// 		swap(nums[pointer], nums[left]);
	// 		quick_sort(nums, left, pointer - 1);
	// 	}
	// 	if (pointer < right)
	// 	{
	// 		quick_sort(nums, pointer + 1, right);
	// 	}
	// }

    void spec_quick_sort(vector<int> &nums, int left, int right,int end)
	{
		if (left == right)
		{
			return;
		}
		int pointer = left;
		int base = nums[left];
		bool swapped = false;
		for (int p = left + 1; p <= right; p++)
		{
			if (nums[p]>base)
			{
				swapped = true;
				if (p == pointer + 1)
				{
					pointer++;
				}
				else
				{
					swap(nums[++pointer], nums[p]);
				}
			}
		}

        if (swapped)
		{
			swap(nums[pointer], nums[left]);
        }
        if(left<pointer && end<pointer)
        {
			spec_quick_sort(nums, left, pointer - 1,end);
        }
		if (pointer < right && pointer<end)
		{
			spec_quick_sort(nums, pointer + 1, right,end);
		}
	}
};

// @lc code=end

