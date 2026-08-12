//202.Happy Number
//A happy number is a number defined by the following process:
// => Starting with any positive integer, replace the number by the sum of the squares of its digits.
// =>Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
// =>Those numbers for which this process ends in 1 are happy.

//https://leetcode.com/problems/happy-number/submissions/2104213173/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        while(n!=1 && n!=4){
            int sum=0;
            while(n>0){
                int digit = n % 10;
                sum += digit * digit;
                n=n/10;
            }
            n = sum;
        }
        return n==1;
        
    }
};

