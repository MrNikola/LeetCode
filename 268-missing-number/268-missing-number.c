

int missingNumber(int* nums, int numsSize){
    int tp=0,i=0;
    while(i<numsSize){
        tp +=i;
        tp -= nums[i];
    i++;
    }
    if(tp<=0){
        return numsSize+tp;
    }
    else
        return tp;
}