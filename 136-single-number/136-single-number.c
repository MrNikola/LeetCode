

int singleNumber(int* nums, int numsSize){
 int ans = 0;
    for(int i = 0;i<numsSize;i++){
        ans = ans ^ nums[i]; 
        // "^" takes two numbers as operands and does XOR on every bit of two numbers. The             result of XOR is 1 if the two bits are different
    }
    return ans;
}

