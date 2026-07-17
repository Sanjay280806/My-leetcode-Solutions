//1186.Maximum Subarray Sum with one Deletion
//Kadane's Algorithm
//Given an array of integers, return the maximum sum for a non-empty subarray (contiguous elements) with at most one element deletion
//Time Complexity: O(n)
//https://leetcode.com/problems/maximum-subarray-sum-with-one-deletion/submissions/2071438306/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumSum(vector<int>& arr) { 
        int noDelete = arr[0];
        int oneDelete = 0;
        int ans = arr[0];

        for(int i=1 ;i <arr.size() ;i++){
            int PrevNoDelete = noDelete ;
            noDelete = max(arr[i] ,noDelete + arr[i]);
            oneDelete = max(PrevNoDelete , oneDelete + arr[i]);

            ans = max(ans ,max(noDelete,oneDelete));
        }
        return ans;
        
    }
};