class Solution {
public:

    float logbase(int a,int b ){
        return log(a)/log(b);
    }

    bool isPowerOfFour(int n) {
        if(n==0){
            return false;
        }

        float num = logbase(n,4);

        if(floor(num)==num){
            return true;
        }
        return false;
    }
};