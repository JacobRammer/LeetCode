#include <vector>
#include <iostream>
#include "Solution.h"

using namespace std;

int main(){

    vector<int> nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);

    Solution a;
    vector<int> test = a.runningSum(nums);

    int itterLen = nums.size();
    for(int i = 0; i < itterLen; i++)
        cout << test[i] << endl;
}