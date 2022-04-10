

int findMaxConsecutiveOnes(int* nums, int numsSize){

    int i,res=0,check=0;
    
    for(i=0;i<numsSize;i++)
    {
        if(nums[i] == 0)
            check = 0;
        else if(nums[i] == 1){
            check += 1;
            if(check == res+1)
                res+=1;
        }
    }
    return res;
}