

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int l, int* returnSize){
    int *res;
    int i;
    
    res = (int*)malloc(sizeof(int)* l * 2);
    *returnSize = l * 2;
    
    while(i<l)
    {
        res[i] = nums[i];
        res[i+l] = nums[i];
        i++;
    }
    return res;
}
