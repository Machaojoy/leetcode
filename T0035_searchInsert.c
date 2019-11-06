/*
 * Given a sorted array and a target value, return the index if the target is found. 
 * If not, return the index where it would be if it were inserted in order.
 *
 * You may assume no duplicates in the array.
 *
 * Example :
 *
 * Input: [1,3,5,6], 5
 * Output: 2
 *
 * Input: [1,3,5,6], 2
 * Output: 1
 *
 * Input: [1,3,5,6], 7
 * Output: 4
 * 
 * Input: [1,3,5,6], 0
 * Output: 0
 */

int searchInsert(int* nums, int numsSize, int target){
    int left = 0;
    int right = numsSize - 1;
    int mid = 0;

    while (1) {
        mid = (left + right) / 2;
        //printf("mid = %d\n", mid);
        if (nums[mid] > target)
            right = mid - 1;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            return mid;
        
        if(left > right)
            return nums[mid] > target ? mid : mid + 1;
    } 
}
