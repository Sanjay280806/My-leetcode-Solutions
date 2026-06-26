//535. Encode and Decode TinyURL
// Design a TinyURL service that can encode a URL into a shortened URL and decode a shortened URL back to the original URL.
//https://leetcode.com/problems/encode-and-decode-tinyurl/submissions/2046939013/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    unordered_map<int,string>mp;
    int id =0;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        mp[id]=longUrl;
        return "http://tinyurl.com/" + to_string(id++); 
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string key = shortUrl.substr(19);
        return mp[stoi(key)];
        
    }
};

