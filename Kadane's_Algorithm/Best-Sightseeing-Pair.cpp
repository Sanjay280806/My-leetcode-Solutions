//1014.Best Sightseeing Pair
//Given an array of positive integers representing the value of sightseeing spots, calculate the maximum score of a pair of sightseeing spots (i, j) where i < j.
//The score of a pair (i, j) is defined as values[i] + values[j] + i - j.
//https://leetcode.com/problems/best-sightseeing-pair/submissions/2070056394/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int Maxleft = values[0] + 0;
        int MaxScore = 0;

        for(int j = 1 ; j<values.size() ;j++){
            MaxScore =max(MaxScore , Maxleft + values[j] - j);
            Maxleft = max(Maxleft , values[j] + j);
        }
        return MaxScore;
        
    }
};