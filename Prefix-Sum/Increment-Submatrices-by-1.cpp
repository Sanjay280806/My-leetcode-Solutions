//2536. Increment Submatrices by 1
// You are given a 2D matrix of size m x n initialized with all 0's and an array of operations ops, where ops[i] = [ai, bi] means you should increment all cells in the submatrix
// [0, 0] to [ai, bi] by 1.
// Return the number of maximum integers in the matrix after performing all the operations.
//https://leetcode.com/problems/increment-submatrices-by-one/submissions/2057847063/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n,vector<vector<int>>& queries) {
        vector<vector<int>> diff(n+1 ,vector<int>(n+1,0));
        for(auto &q : queries){
            int r1 = q[0];
            int c1 = q[1];
            int r2 = q[2];
            int c2 = q[3];

            diff[r1][c1]++;
            diff[r1][c2 +1]--;
            diff[r2+1][c1]--;
            diff[r2 +1][c2 +1]++;
        }
        vector<vector<int>> ans(n,vector<int>(n));
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                ans[i][j] =diff[i][j];

                if (i)
                    ans[i][j] += ans[i - 1][j];

                if (j)
                    ans[i][j] += ans[i][j - 1];

                if (i && j)
                    ans[i][j] -= ans[i - 1][j - 1];
            }
        }
        return ans;
        
    }
};