/*
    Given an integer array nums, find the
subarray
 which has the largest sum and return its sum.



Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Example 2:

Input: nums = [1]
Output: 1
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23


Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // Kadane's Algo
        int max_so_far = INT_MIN;
        int max_here = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            max_here += nums[i];
            if (max_so_far < max_here)
            {
                max_so_far = max_here;
            }

            if (max_here < 0)
            {
                max_here = 0;
            }
        }

        return max_so_far;
    }
};