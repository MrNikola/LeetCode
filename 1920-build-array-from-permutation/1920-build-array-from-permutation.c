

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize){
    int i=0;
    *returnSize = numsSize;
    int *str = (int*)malloc(sizeof(int) * numsSize);
    
    while(i < numsSize)
    {
        str[i] = nums[nums[i]];
        i++;
    }
    return str;
}