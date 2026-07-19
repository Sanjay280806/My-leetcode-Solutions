//867.Transpose Matrix
//Given a 2D integer array matrix, return the transpose of matrix.
//The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
//https://leetcode.com/problems/transpose-matrix/submissions/2073709960/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> result(n ,vector<int>(m));
        for(int j=0 ; j<n ;j++){
            for(int i=0 ;i<m ;i++){
                result[j][i] = matrix[i][j];
            }
        }
        return result;
        
    }
};
