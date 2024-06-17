class Solution {
public:
    bool judgeSquareSum(int c) {
        long long l=0, r=sqrt(c);

        while(l<=r){
            long long ans=l*l + r*r;
            if(ans<c){
                l++;
            }
            else if(ans>c){
                r--;
            }
            else if(ans==c){
                return true;
            }
        }
        return false;
    }
};