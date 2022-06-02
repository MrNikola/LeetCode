

int removeDuplicates(int* nums, int numsSize){

     int j=0;
    int k=numsSize;
    
    for(int i=1; i<numsSize; i++){
        if(nums[j]==nums[i]){
            k--;
        }
        else{
            nums[++j]=nums[i];
        }
    }
    return k;
}