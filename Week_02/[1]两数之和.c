/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int i, j, b;
    int *result = NULL;
    for (i = 0; i < numsSize - 1; i++) {
        b = target - nums[i];
        for (j = i + 1; j < numsSize; j++) {
            if (nums[j] == b) {
                result = (int *)malloc(sizeof(int) * 2);
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    return result;
}
// @lc code=end
