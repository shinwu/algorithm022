/*
 * @lc app=leetcode.cn id=242 lang=c
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
#include <stdbool.h>

bool isAnagram(char * s, char * t){
    int lenS = strlen(s), lenT = strlen(t);
    if (lenS != lenT) {
        return false;
    }

    int ht[26];
    memset(ht, 0, sizeof(ht));
    for (int i = 0; i < lenS; i++) {
        ht[s[i] - 'a']++;
    }

    for (int i = 0; i < lenT; i++) {
        ht[t[i] - 'a']--;
        if (ht[t[i] - 'a'] < 0) {
            return false;
        }
    }

    return true;
}


// @lc code=end

