/*Approach : Dutch National Flag algorithm
The Dutch National Flag algorithm, also known as 3-way partitioning, is an algorithm for sorting an array containing three distinct values. The algorithm was designed to solve the problem of sorting an array containing only 0s, 1s, and 2s, which is similar to the problem in the given question.*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0 ;
        int m = 0 ;
        int r = nums.size()-1;
        while(m<=r){
            if(nums[m]==0){
                swap (nums[l] , nums[m]);
                l++;
                m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m] , nums[r]);
                r--;
            }

        }
        
    }
};