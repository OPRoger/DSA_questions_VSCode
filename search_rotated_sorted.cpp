/*
33. Search in Rotated Sorted Array
Attempted
Medium

Topics
Companies
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
Example 3:

Input: nums = [1], target = 0
Output: -1
 

Constraints:

1 <= nums.length <= 5000
-104 <= nums[i] <= 104
All values of nums are unique.
nums is an ascending array that is possibly rotated.
-104 <= target <= 104
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0;
        int end= nums.size()-1;

        while(start<=end){
            int mid = ( start + end )/ 2;

            if(nums[mid]==target)
            {
                return mid;
            }

            if(nums[start]<=nums[mid])
            {
                if(target<nums[mid] && target>=nums[start])
                {
                    end = mid -1;
                }
                else
                {
                    start = mid +1;
                }
            }
            else
            {
                if(target>nums[mid] && target<=nums[end])
                {
                    start = mid+1;
                }
                else
                {
                    end = mid -1;
                }
            }
         }
        
    
    return -1;
    }

    
};

int main() {
    
    Solution su;

    int N;
    cout<<"enter the size"<<endl;
    cin >> N;


    int target;
    cout<<"enter the target"<<endl;
    cin>>target;

    vector<int> nums(N);  

    cout<<"enter the array"<<endl;
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < N; i++) {
        cout<< nums[i] << " ";
    }

    cout<<"output is  "<<su.search(nums,target)<<endl; 

    return 0;
}
