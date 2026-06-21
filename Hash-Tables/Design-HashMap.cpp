//706. Design HashMap
//Design a HashMap without using any built-in hash table libraries.
//https://leetcode.com/problems/design-hashmap/submissions/2040804765/

#include <bits/stdc++.h>
using namespace std;
class MyHashMap {
public:
    vector<int>map;

    MyHashMap() {
        map.resize(1000001,-1);
        
    }
    
    void put(int key, int value) {
        map[key] = value;
        
    }
    
    int get(int key) {
        return map[key];
    }
    
    void remove(int key) {
        map[key] = -1;
        
    }
};