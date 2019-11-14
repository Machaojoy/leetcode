/* 
 * Given an array nums of n integers where n > 1,  return an array output such that output[i] is equal to 
 * the product of all the elements of nums except nums[i].
 *
 * Note: Please solve it without division and in O(n).
 * Input:  [1,2,3,4]
 * Output: [24,12,8,6]
 */
 
/* left and right pointers */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> res = vector(n, 1);

       int left = 1,right = 1;

       for (int i = 0; i < n; ++i) {
           res[i] *= left;
           left *= nums[i];

           res[n-1-i] *= right;
           right *= nums[n-1-i];
       }

       return res;
    }
};
