//395. Longest Substring with At Least K Repeating Characters
// Given a string s and an integer k, return the length of the longest substring of s such that the frequency of each character in this substring is greater than or equal to k.
//https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/submissions/2067200815/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestSubstring(string s, int k) {
        int ans =0;
        for(int targetUnique = 1 ; targetUnique <= 26 ;targetUnique++){
            int left =0 , right =0 , unique =0 , atleastK= 0;
            vector<int>freq(26,0);

            while(right<s.size()){
                if(freq[s[right] - 'a'] == 0) unique++;
                freq[s[right] - 'a']++;

                if(freq[s[right] - 'a'] == k) atleastK++;

                while(unique > targetUnique){
                    if(freq[s[left] - 'a'] == k) atleastK--;
                    freq[s[left] - 'a']--;
                    if(freq[s[left] - 'a'] == 0) unique--;

                    left++;
                }

                if (unique == targetUnique && unique == atleastK)
                    ans = max(ans, right - left + 1);
                right++;
                
            }

        }
        return ans;
        
    }
};