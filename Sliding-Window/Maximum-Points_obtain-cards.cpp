//1423. Maximum Points You Can Obtain from Cards
// You have several cards arranged in a row, and each card has an associated number of points. The points are given in the integer array cardPoints.
// In one step, you can take one card from the beginning or from the end of the row. You have to take exactly k cards.
//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/submissions/2049660409/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int sum = 0;
        int n = cardPoints.size();
        for(int i=0 ; i<cardPoints.size() ;i++){
            sum+=cardPoints[i];
        }

        int windowSize = n-k;
        int windowsum = 0;

        for(int i=0; i<windowSize ;i++){
            windowsum+=cardPoints[i];
        }
        int minwindowsum = windowsum;
        for(int i =windowSize ; i<n ; i++){
            windowsum += cardPoints[i];
            windowsum -=cardPoints[i - windowSize];
            minwindowsum = min(windowsum , minwindowsum);
        }
        return sum - minwindowsum;
        
    }
};