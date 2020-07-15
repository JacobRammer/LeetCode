//
// Created by Jacob Rammer on 7/15/20.
//

#include "Solution.h"

vector<int> Solution::runningSum(vector<int> &nums) {

    int itterLen = nums.size() - 1;
    vector<int> retVal;
    retVal.reserve(nums.size());
    retVal.push_back(nums[0]);

    for(int i = 0; i < itterLen; i++)
    {
        retVal.push_back(retVal[i] + nums[i + 1]);
    }

    return retVal;

}
