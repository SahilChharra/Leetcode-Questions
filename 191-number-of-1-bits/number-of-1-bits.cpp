class Solution {
public:
    int hammingWeight(uint32_t n) {
        int r=0;
        while(n!=0){
            r+=(n%2);
            n>>=1;
        }

        return r;
    }
};