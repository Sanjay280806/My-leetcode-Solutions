//49.Group Anagrams
//Given an array of strings, group anagrams together.
//https://leetcode.com/problems/group-anagrams/submissions/2044499856/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto &p : mp)
            ans.push_back(p.second);

        return ans;
    }
};