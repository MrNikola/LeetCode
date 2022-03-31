

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    *returnSize = n;
    char ** res = (char **)malloc(n*sizeof(char *));
    for(int i=1; i<=n; i++)
    {
        int j = i-1;
        res[j] = (char *)malloc(9*sizeof(char)); 
        if((i%3 == 0) && (i%5 == 0))
            res[j] = "FizzBuzz";
        else if(i%3 == 0)
            res[j] = "Fizz";
        else if(i%5 == 0)
            res[j] = "Buzz";
        else  sprintf(res[j], "%d", i); 
        /*sprintf(char*,Output or Format specifiers,num or "string") 
        easiest way to convert an integer to a string */
    }
    return res;
}