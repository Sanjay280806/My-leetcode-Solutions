//414. Third Maximum Number
//Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
//https://leetcode.com/problems/third-maximum-number/submissions/2028906380/

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long third = LLONG_MIN;

        for (int x : nums) {
            if (x == first || x == second || x == third)
                continue;

            if (x > first) {
                third = second;
                second = first;
                first = x;
            }
            else if (x > second) {
                third = second;
                second = x;
            }
            else if (x > third) {
                third = x;
            }
        }

        return (third == LLONG_MIN) ? first : third;
    }
};