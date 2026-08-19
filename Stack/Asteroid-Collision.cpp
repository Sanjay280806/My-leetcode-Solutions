//735.Asteroid Collision
//Find out the state of the asteroids after all collisions. 
//If two asteroids meet, the smaller one will explode. 
//If both are the same size, both will explode. 
//Two asteroids moving in the same direction will never meet.
//https://leetcode.com/problems/asteroid-collision/submissions/2113023272/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>stk;

        for(int asteroid : asteroids){
            bool destroyed = false;

            while(!stk.empty() && stk.back() > 0 && asteroid < 0){
                if(stk.back() < -asteroid){
                    stk.pop_back();
                    continue;
                }else if(stk.back() == -asteroid) {
                    stk.pop_back();
                    destroyed = true;
                    break;
                }else{
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed){
                stk.push_back(asteroid);
            }
        }
        return stk;
        
    }
};

 