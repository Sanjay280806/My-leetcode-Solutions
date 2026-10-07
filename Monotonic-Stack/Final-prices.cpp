//1475.Final Prices With a Special Discount in a Shop
//Given the array prices where prices[i] is the price of the ith item in a shop. There is a special discount for items in the shop, if you buy the ith item, then you will receive a discount equivalent to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i], otherwise, you will not receive any discount at all. Return an array where the ith element is the final price you will pay for the ith item of the shop considering the special discount.
//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/submissions/2165561233/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
         int n = prices.size();
        vector<int> result(prices.begin() , prices.end());
        stack<int>stk;

        for(int j = 0 ; j < n ; j++){
            while(!stk.empty() && prices[j] <= prices[stk.top()]){
                int i = stk.top();
                stk.pop();
                result[i] = prices[i] - prices[j];
            }
            stk.push(j);
        }
        return result;
        
    }
};