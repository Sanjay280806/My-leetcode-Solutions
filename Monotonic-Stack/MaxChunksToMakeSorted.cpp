//769. Max Chunks To Make Sorted
//You are given an integer array arr of length n that represents a permutation of the integers in the range [0, n - 1].
//We split arr into some number of chunks (i.e., partitions), 
//and individually sort each chunk. After concatenating them, the result should equal the sorted array.
//Return the largest number of chunks we can make to sort the array.
//https://leetcode.com/problems/max-chunks-to-make-sorted/submissions/2183931978/

#include <bits/stdc++.h>
using namespace std;
int maxChunksToSorted(vector<int>& arr) {
    int maxSoFar = 0;
    int chunks = 0;
    for (int i = 0; i < arr.size(); i++) {
        maxSoFar = max(maxSoFar, arr[i]);
        if (maxSoFar == i) {
            chunks++;
        }
    }
    return chunks;
}