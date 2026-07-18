// 978.Longest Turbulent Subarray
//A subarray is turbulent if the comparison sign flips between each adjacent pair of elements in the subarray.
/*inc = length of turbulent subarray ending at i where
arr[i-1] < arr[i] (last comparison is increasing)
dec = length of turbulent subarray ending at i where
arr[i-1] > arr[i] (last comparison is decreasing)
*/
//https://leetcode.com/problems/longest-turbulent-subarray/submissions/2072643405/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return 1;

        int inc = 1, dec = 1;
        int ans = 1;

        for (int i = 1; i < n; i++) {
            int prevInc = inc;
            int prevDec = dec;

            if (arr[i] > arr[i - 1]) {
                inc = prevDec + 1;
                dec = 1;
            }
            else if (arr[i] < arr[i - 1]) {
                dec = prevInc + 1;
                inc = 1;
            }
            else {
                inc = dec = 1;
            }

            ans = max(ans, max(inc, dec));
        }

        return ans;
    }
};