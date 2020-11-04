#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    
    void reverse(vector<int> &nums , int start , int end)
    {
        while(start < end)
        {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
    
    
    void rotate(vector<int> &nums,int key)
    {
        
        
        int length = nums.size();
        key = key%length;                    // to keep rotations less than the key as it behave in a cyclic manner
        
        
        reverse(nums , 0, length-1);           // reverse the whole vector
        
        reverse(nums , 0 , key-1);              // reverse the vector upto index k-1
        
        reverse(nums , key , length-1);         // reverse the remaining vector
    }
 
};
