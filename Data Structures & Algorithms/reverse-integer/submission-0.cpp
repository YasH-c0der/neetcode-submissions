class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int neg = 0;
        if(x<0) {
            neg = 1;
            x = -1*x;
        }
        while(x>0){
            rev = (rev*10)+(x%10);
            x = x/10;
        }
        if(rev>INT_MAX) return 0;
        if(neg == 1) return (int)(-1)*rev;
        return (int)rev;
    }
};
