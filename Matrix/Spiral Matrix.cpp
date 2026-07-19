//54.Spiral Matrix
//Given an m x n matrix, return all elements of the matrix in spiral order.
//Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
//Output: [1,2,3,6,9,8,7,4,5]
//https://leetcode.com/problems/spiral-matrix/submissions/2073764858/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int top =0 ,bottom = matrix.size() -1;
        int left = 0 ,right = matrix[0].size() -1;

        while (top <= bottom && left <= right) {
            for(int col = left ; col <=right ; col++){
                result.push_back(matrix[top][col]);
            }
            top++;
            for(int row = top ; row <=bottom ;row++){
                result.push_back(matrix[row][right]);
            }
            right--;
            
            if (top <= bottom) {
                for(int col = right ;col >=left ;col--){
                    result.push_back(matrix[bottom][col]);
                }
                bottom--;
            }

            if(left <= right){
                for (int row = bottom; row >= top; row--) {
                    result.push_back(matrix[row][left]);
                }
                left++;
            }
        }
        return result;

    }
};