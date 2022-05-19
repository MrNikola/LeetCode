

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){

    *returnSize = candiesSize;
    bool *result=(bool*)malloc(candiesSize*sizeof(bool));
    int i,j,c,max=0;
    for(i=0;i<candiesSize;i++){
        if(candies[i]>max)
            max=candies[i];
    }
    for(i=0;i<candiesSize;i++){
        candies[i] += extraCandies;
        if(candies[i]>=max)  result[i]=1;
        else result[i]=0;
    }
    return result;
}