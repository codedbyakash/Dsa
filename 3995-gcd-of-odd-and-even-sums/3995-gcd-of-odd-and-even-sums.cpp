class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumOeven=0;
        for(int i=1;i<=n;i++){
            sumOeven+=2*i;
        }
        for(int i=1;i<=n;i++){
            sumOdd+=2*i-1;
        }
        int gcdofnum=gcd(sumOdd,sumOeven);
        return gcdofnum;
    }
};