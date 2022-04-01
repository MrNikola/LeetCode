

bool isPowerOfTwo(int n){
    long i = 1; /*(2^31>int max) That's why I used long*/
    while(i<n)
        i*=2;
    return i == n;
}