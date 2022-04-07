

int addDigits(int num)
{
    int mod,s = 0;
    while(num > 0)
    {
        s += num%10;
        num /= 10;
    }
    while(s>9)
    {
        mod = s % 10;
        s /= 10;
        s = mod + s;
    }
        
        
    return s;
}