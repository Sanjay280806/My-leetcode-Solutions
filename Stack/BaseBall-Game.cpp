//682.Baseball Game
//You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.
//An integer x.
//Record a new score of x. => '+'.
//Record a new score that is the sum of the previous two scores. => 'D'.
//Record a new score that is the double of the previous score. => 'C'.
//Invalidate the previous score, removing it from the record.
//Return the sum of all the scores on the record after applying all the operations.
//https://leetcode.com/problems/baseball-game/submissions/2106757519/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>stack;

        for(const string& op : operations){
            if(op == "C"){
                stack.pop_back();
            }else if(op == "D"){
                stack.push_back(2*stack.back());
            }else if(op == "+"){
                int n = stack.size();
                stack.push_back(stack[n-1] + stack[n-2]);

            }else{
                stack.push_back(stoi(op));
            }
        }
        int sum = 0;
        for(int score : stack){
            sum+=score;
        }
        return sum;
        
    }
};