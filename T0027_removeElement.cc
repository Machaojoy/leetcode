/** 
 * Given an array nums and a value val, remove all instances of that value in-place 
 * and return the new length.
 * 
 * Do not allocate extra space for another array, you must do this by modifying the 
 * input array in-place with O(1) extra memory.
 * 
 * The order of elements can be changed. It doesn't matter what you leave beyond the
 * new length.
 */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator itor;

        for (itor = nums.begin(); itor != nums.end(); itor++)
            if(*itor == val) {
                nums.erase(itor);
                itor--; //itor points to next one
            }
       
        return  nums.size();
    }
};
