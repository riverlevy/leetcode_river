/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
class Solution {
public:
//     int cal_(int i,int j, vector<vector<int>>& obstacleGrid)
//     {        
//         if(obstacleGrid[i][j]==1)
//             return 0;
//         if (i==0&&j==0)
//             return 1;
//         else if(i==0&&j>0)
//         {
//             return cal_(i,j-1, obstacleGrid);
//         }
//         else if(j==0&&i>0)
//             return cal_(i-1,j, obstacleGrid);
//         else
//             return cal_(i-1,j, obstacleGrid)+cal_(i,j-1, obstacleGrid);
//     };
// //递归 ，精巧的·废物。 垃圾，狗都不用
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        # 状态转移方程，到达index_row,index_loc的路径数目为到达index_row-1,index_loc的路径数目 + 到达index_row,index_loc-1的路径数目
        # 注意边界，当一个index为0时
        # 另外注意特殊情况，即当到达index_row,index_loc的路径数目为0如果此处为障碍物时。
        int row_size = obstacleGrid.size()-1;//行
        int loc_size = obstacleGrid[0].size()-1;//列
        vector<vector<int>>path_nums = obstacleGrid;
        for (size_t i=0;i<=row_size;i++)
        {
            for (size_t j = 0; j <=loc_size; j++)
            {
                /* code */
                if(obstacleGrid[i][j]==1)
                    path_nums[i][j]=0;
                else
                {
                    if(i+j==0)
                        path_nums[i][j] =1;
                    else if(i==0&&j>0)
                        path_nums[i][j] = path_nums[i][j-1];
                    else if(j==0&&i>0)
                        path_nums[i][j] = path_nums[i-1][j];
                    else
                        path_nums[i][j] = path_nums[i-1][j] + path_nums[i][j-1];
                }
            }            
        }
        return path_nums[row_size][loc_size];
    };
};
// @lc code=end

