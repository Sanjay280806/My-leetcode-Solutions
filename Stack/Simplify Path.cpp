//71.Simplify Path
//You are given an absolute path for a Unix-style file system, which always begins with a slash '/'. 
//Your task is to transform this absolute path into its simplified canonical path.//
// The rules of a Unix-style file system are as follows:
// -> A single period '.' represents the current directory.
// -> A double period '..' represents the previous/parent directory.
// -> Multiple consecutive slashes such as '//' and '///' are treated as a single slash '/'.
// -> Any sequence of periods that does not match the rules above should be treated as a valid directory or file name. For example, '...' and '....' are valid directory or file names.
//https://leetcode.com/problems/simplify-path/submissions/2125311397/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string simplifyPath(string path) {

        vector<string> stack;
        string current = "";

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {

                if (current == "..") {
                    if (!stack.empty()) {
                        stack.pop_back();
                    }

                }
                else if (current != "" && current != ".") {
                    stack.push_back(current);
                }
                current = "";
            }
            else {
                current += path[i];
            }
        }

        string result = "";

        for (string dir : stack) {
            result += "/" + dir;
        }

        if (result == "") {
            return "/";
        }

        return result;
    }
};