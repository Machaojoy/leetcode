/**
 * Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
 * 
 * Example:
 * 
 * Input: [-2,1,-3,4,-1,2,1,-5,4],
 * Output: 6
 * Explanation: [4,-1,2,1] has the largest sum = 6.
 * 
 * If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
 */

int maxSubArray(int* nums, int numsSize){
    int i,maxSub;
    int* tmp = malloc(sizeof(int) * numsSize);
    if(!tmp)
        return -1;

    tmp[0] = nums[0];
    maxSub = tmp[0];

    for(i = 1; i < numsSize; i++) {
        if(tmp[i-1] <= 0)
            tmp[i] = nums[i];
        else 
            tmp[i] = nums[i] + tmp[i-1];
 
        if(maxSub < tmp[i])
            maxSub = tmp[i];
    }

    free(tmp);
    return maxSub;
}
