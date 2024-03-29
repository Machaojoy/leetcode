/**
 *
Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.

Note:

Your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution and you may not use the same element twice.
Example:

Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore index1 = 1, index2 = 2.
 *
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){

    int l = 0, r = numbersSize - 1;

    while (l != r) {
        if (numbers[l] + numbers[r] > target)
            r--;
        else if (numbers[l] + numbers[r] < target)
            l++;
        else 
            break;
    }

    int* returnArray = (int*)malloc(sizeof(int) * 2);
    returnArray[0] = l + 1;
    returnArray[1] = r + 1;
    //printf("l = %d, r = %d\n", l, r);

    if (l == r)
        *returnSize = 0;
    else
        *returnSize = 2;

    return returnArray;
}
