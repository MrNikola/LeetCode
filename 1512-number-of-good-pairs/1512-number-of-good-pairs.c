

int numIdenticalPairs(int* nums, int numsSize){

    int i=0,j,check=0;
    while(numsSize>1 && i<numsSize-1){
        j=i+1;
        while(j<numsSize){
            if(nums[i]==nums[j])
                check+=1;
            j++;
        }
        i++;
    }
    return check;
}