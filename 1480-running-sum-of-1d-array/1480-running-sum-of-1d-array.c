/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    
    int top = 0,i = 0;
    *returnSize = numsSize;
    int *res = (int*)malloc(sizeof(int) * numsSize);
                            
    while(i<numsSize)
    {
        top += nums[i];
        res[i] = top;
        i++;
    }
    return res;                 
}