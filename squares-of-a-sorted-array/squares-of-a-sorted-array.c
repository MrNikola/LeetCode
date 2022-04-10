

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize){
    
int n = numsSize, temp; *returnSize = n;
    int *result = (int *)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        result[i] = nums[i] * nums[i];
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(result[i] > result[j]){
                temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }
    return result;
}
