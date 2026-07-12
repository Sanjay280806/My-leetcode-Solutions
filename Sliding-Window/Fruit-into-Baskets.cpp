//904.Fruits into Baskets
//Given an array of characters where each character represents a fruit tree, you are given two baskets, and your goal is to put maximum number of fruits in each basket. The only restriction is that each basket can have only one type of fruit.
//You can start with any tree, but you can't skip a tree once you have started. You will pick exactly one fruit from every tree until you cannot, i.e., you will stop when you have to pick from a third fruit type.
//Return the maximum number of fruits you can pick.
//https://leetcode.com/problems/fruit-into-baskets/submissions/2064628838/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>freq;
        int left = 0;
        int Maxlen = 0;

        for(int right =0 ; right < fruits.size() ;right++){
            freq[fruits[right]]++;

            while(freq.size() > 2){
                freq[fruits[left]]--;

                if(freq[fruits[left]] == 0){
                    freq.erase(fruits[left]);
                }
                left++;
            }
            Maxlen = max(Maxlen , right -left +1);
        }
        return Maxlen;
        
    }
};