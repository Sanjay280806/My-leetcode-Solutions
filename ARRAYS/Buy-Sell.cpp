/*
    Problem: Best Time to Buy and Sell Stock
    LeetCode: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
    Difficulty: Easy
    Topic: Array, Greedy
    Approach:
    - Track the minimum price seen so far
    - For each day, calculate profit if sold on that day
    - Keep updating the maximum profit
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int minPrice = prices[0];   // Buy price
        int maxProfit = 0;          // Maximum profit

        for (int i = 0; i < n; i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else {
                int profit = prices[i] - minPrice;
                maxProfit = max(maxProfit, profit);
            }
        }

        return maxProfit;
    }
};

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices:\n";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    Solution sol;
    int result = sol.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}
