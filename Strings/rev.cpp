
/*
    Problem: Reverse Words in a String
    LeetCode: https://leetcode.com/problems/reverse-words-in-a-string/submissions/2031874265/
    Difficulty: Medium

    Time Complexity: O(n)
    Space Complexity: O(n)
*/
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    string word;
    vector<string> words;

    // Extract words
    while (ss >> word) {
        words.push_back(word);
    }

    // Reverse words
    reverse(words.begin(), words.end());

    // Join words
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1)
            result += " ";
    }

    return result;
}

int main() {
    string s = "  I   love   coding  ";
    cout << reverseWords(s);
    return 0;
}
