/**
 * Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
 * 
 * Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
 */ 
 
int removeDuplicates(int* nums, int numsSize){

    int i,j = 0;

    if (!numsSize)
        return 0;

    for(i = 1; i < numsSize; i++)
        if (nums[j] != nums[i]) 
            nums[++j] = nums[i];
        
    return j+1;
}
