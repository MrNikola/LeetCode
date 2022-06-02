

void moveZeroes(int* nums, int numsSize){

    int i=0,k=0,say=0;
    while(nums && i<numsSize){
        if(nums[i]==0)
            say++;
        else if(nums[i]!= 0){
            nums[k]=nums[i];
            k++;
        }
        i++;
    }
    while(say>0){
        nums[--i]=0;
        say--;
    }
    return nums;
}