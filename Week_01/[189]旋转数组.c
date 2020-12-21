/*
 * @lc app=leetcode.cn id=189 lang=c
 *
 * [189] 旋转数组
 */

// @lc code=start


void rotate(int* nums, int numsSize, int k){
    int index = 0;
    int tempIndex = 0;
    int temp;
    int first = nums[0];
    int start = 0;
    for (int i = 0; i < numsSize; i++) {
        if (start == index && i != 0) {
            first = nums[++start];
            index = start;
        }

        tempIndex = (index + k) % numsSize;
        temp = nums[tempIndex];
        nums[tempIndex] = first;
        index = tempIndex;
        first = temp;
    }
}
// @lc code=end

