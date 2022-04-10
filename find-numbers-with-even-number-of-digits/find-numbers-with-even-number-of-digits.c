

int findNumbers(int* nums, int numsSize){

    int num,digit,check=0;
    for(int i=0;i<numsSize;i++)
    {
        digit = 0, num = nums[i];
        while(num != 0){
            num /= 10;
            digit++;
        }
        if(digit% 2 == 0)
            check += 1;
    }
    return check;
}