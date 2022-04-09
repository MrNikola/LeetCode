

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
    int j,i=0;
    *returnSize = 2;
    int *res = (int*)malloc(sizeof(int)* 2);
    
    while(i<numsSize-1)
    {
        j = i+1;
        while(j<numsSize)
        {
            if(target == nums[i]+nums[j]){
                res[0] = i;
                res[1] = j;
                return res;
            }
            j++;
        }
        i++;
    }
    return 0;
}
