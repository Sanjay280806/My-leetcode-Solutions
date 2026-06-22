//68. Text Justification
//Given an array of words and a width maxWidth, format the text such that each line has exactly maxWidth characters and is fully (left and right) justified.
//https://leetcode.com/problems/text-justification/submissions/2041918893/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>result;
        int i=0;
        int n=words.size();

        while(i<n){
            int linelength = words[i].length();
            int j =i+1;

            while(j<n && linelength + 1 +words[j].length()<=maxWidth){
                linelength+= 1 + words[j].length();
                j++;
            }
            int numberofwords = j-i;
            string line;

            if( j==n || numberofwords ==1){
                line = words[i];
                for(int k = i+1 ; k<j ; k++){
                    line+= " ";
                    line+=words[k];
                }
                while(line.length()<maxWidth){
                    line += " ";
                }

            }
            else{
                int totalLetters = 0;
                for(int k=i ; k<j ;k++){
                    totalLetters+=words[k].length();
                }
                int totalSpaces = maxWidth - totalLetters;
                int gaps =numberofwords - 1;
                int evenSpaces = totalSpaces/gaps;
                int extraSpaces =totalSpaces % gaps ;

                for(int k=i ;k<j-1 ;k++){
                    line+=words[k];
                    line.append(evenSpaces,' ');
                    if(extraSpaces>0){
                        line+=" ";
                        extraSpaces--;
                    }
                }
                line+=words[j-1];
            }
            result.push_back(line);
            i=j;

        }
        return result;
        
    }
};