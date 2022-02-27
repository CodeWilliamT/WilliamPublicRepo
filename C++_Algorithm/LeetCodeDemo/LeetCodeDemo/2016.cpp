﻿using namespace std;
#include <vector>
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int rst = 0, x = nums[0], y = x;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < x) {
                x = nums[i];
                y = x;
            }
            else if (nums[i] > y) {
                y = nums[i];
                rst = max(y - x, rst);
            }
        }
        return rst ? rst : -1;
    }
};