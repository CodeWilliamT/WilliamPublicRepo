﻿using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <functional>
#include <bitset>
//枚举
//枚举买x支钢笔能买铅笔的方案数+1(不买)的累加。
class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long rst = 0;
        for (int i = 0; i <= total / cost1; i++) {
            rst += (total - i * cost1) / cost2+1;
        }
        return rst;
    }
};