

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){

    *returnSize = numsSize;
    int *Nnums=(int*)malloc(numsSize*sizeof(int));
    int i=0,j,c;
    while(numsSize>1 && i<numsSize){
        j=0;
        c=0;
        while(j<numsSize){
            if(nums[j]<nums[i])
                c+=1;
            j++;
        }
        Nnums[i]= c;
        i++;
    }
    return Nnums;
}