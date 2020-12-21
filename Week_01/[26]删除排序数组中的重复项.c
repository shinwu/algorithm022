/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start

//暴力：
//for i=0,j=0;i<numsSize;i++:
//  if (nums[i] != nums[j]):
//     nums[++j] = nums[i];
// 

int removeDuplicates(int* nums, int numsSize){
    if (numsSize == 0) {
        return 0;
    }

    int i, j;
    for (i = 0, j = 0; i < numsSize; i++) {
        if (nums[i] != nums[j]) {
            nums[++j] = nums[i];
        }
    }

    return j + 1;
}
// @lc code=end

