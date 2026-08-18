//155. Min Stack
//Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.
//https://leetcode.com/problems/min-stack/submissions/2111660387/

#include <bits/stdc++.h>
using namespace std;
class MinStack {
    vector<pair<int,int>>stack;
public:
    MinStack() {}
    
    void push(int value) {
        int currentMin = stack.empty() ? value : min(value , stack.back().second);
        stack.push_back({value,currentMin});
        
    }
    
    void pop() {
        stack.pop_back();
    }
    
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack.back().second;
        
    }
};