//1854. Maximum Population Year
//https://leetcode.com/problems/maximum-population-year/submissions/2054748187/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int delta[101] = {0};
        for(auto log : logs){
            delta[log[0] - 1950]++;
            delta[log[1] - 1950]--;
        }

        int Maxpop = 0;
        int RunningSum = 0;
        int Resultyear = 1950;

        for(int i=0 ; i<101 ;i++){
            RunningSum +=delta[i];
            if(RunningSum > Maxpop){
                Maxpop = RunningSum;
                Resultyear = 1950 + i;
            }
        }
        return Resultyear;
    }
};