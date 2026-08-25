//853. Car Fleet
//There are n cars at given miles away from the starting mile 0, traveling to reach the mile target.
//You are given two integer arrays position and speed, both of length n, 
//where position[i] is the starting mile of the ith car and speed[i] is the speed of the ith car in miles per hour.
//https://leetcode.com/problems/car-fleet/submissions/2119992505/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int, double>> cars;
        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        sort(cars.rbegin(), cars.rend());

        vector<double> stack;

        for (auto car : cars) {
            double time = car.second;

            if (stack.empty() || time > stack.back()) {
                stack.push_back(time);
            }
        }

        return stack.size();
    }
};