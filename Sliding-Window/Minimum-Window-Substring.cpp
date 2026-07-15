//76.Minimum Window Substring
// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".
// The testcases will be generated such that the answer is unique.
//https://leetcode.com/problems/minimum-window-substring/submissions/2068991930/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size(), n = t.size();
        if (n > m) return "";

        unordered_map<char, int> tCount;
        for (char c : t) tCount[c]++;

        vector<pair<int, char>> filtered;
        for (int i = 0; i < m; i++) {
            if (tCount.count(s[i])) {
                filtered.push_back({i, s[i]});
            }
        }

        int required = tCount.size();
        int formed = 0;
        unordered_map<char, int> windowCount;
        int bestStart = 0, bestLen = INT_MAX;
        int left = 0;

        for (int right = 0; right < (int)filtered.size(); right++) {
            char c = filtered[right].second;
            windowCount[c]++;

            if (windowCount[c] == tCount[c]) {
                formed++;
            }

            while (formed == required) {
                int start = filtered[left].first;
                int end = filtered[right].first;
                if (end - start + 1 < bestLen) {
                    bestStart = start;
                    bestLen = end - start + 1;
                }
                char leftChar = filtered[left].second;
                windowCount[leftChar]--;
                if (windowCount[leftChar] < tCount[leftChar]) {
                    formed--;
                }
                left++;
            }
        }
        return bestLen == INT_MAX ? "" : s.substr(bestStart, bestLen);
    }
};