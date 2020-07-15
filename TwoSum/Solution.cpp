//
// Created by Jacob Rammer on 7/15/20.
//

#include "Solution.h"

vector<int> Solution::twoSum(vector<int> &numbers, int target) {

    int left = 0;
    int right = numbers.size() - 1;
    while(left < right)
        if(numbers[left] + numbers[right] == target)
            return {left + 1, right + 1};
        else if(numbers[right] + numbers[left] > target)
            right--; // move right pointer to the left
        else if(numbers[right] + numbers[left] < target)
            left++; // move left pointer to larger values

    return {left + 1, right + 1};
}
