//48. Rotate Image
//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
//https://leetcode.com/problems/rotate-image/submissions/2074842292/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int top = 0 , bottom = n-1;
        while(top<bottom){
            int left = top , right = bottom;
            for(int i=0 ;i<right - left ;i++){
                int temp = matrix[top][left+i];
                matrix[top][left+i] = matrix[bottom-i][left];
                matrix[bottom-i][left] = matrix[bottom][right-i];
                matrix[bottom][right -i] = matrix[top+i][right];
                matrix[top+i][right] = temp;
            }
            top++;
            bottom--;
        }
    
    }
};