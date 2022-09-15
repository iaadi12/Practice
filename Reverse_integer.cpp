class Solution {
    public:
    int reverse(long long x){
        long long rem, sum = 0;
        bool negative = false;
        if(x < 0){
            negative = true;
            x = x * -1;
        }
        while(x > 0){
            rem = x % 10;
            sum = (sum * 10 + rem);
            x=x/10;
        }
        if(sum < INT_MIN || sum > INT_MAX) return 0;
        if(negative) return -sum;
        return sum;
    }
};
