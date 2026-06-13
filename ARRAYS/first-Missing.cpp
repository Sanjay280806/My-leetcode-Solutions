//41. First Missing Positive
//Given an unsorted integer array nums, return the smallest missing positive integer
//https://leetcode.com/problems/first-missing-positive/submissions/2031869317/

#include <vector>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n ;i++){
            while(nums[i]>=1 && nums[i]<=n && nums[nums[i]-1]!=nums[i]){
                int correct_index = nums[i]-1;
                int temp= nums[i];
                nums[i]=nums[correct_index];
                nums[correct_index]=temp;
            }
        }

        for(int i =0; i<n ;i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }
        return n+1;
        
    }
};