class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1){
            return 1;
        }

        int p=1;
        int c=1;
        for(int i=2;i<=n;i++){
            int temp=c;
            c=p+c;
            p=temp;
        }

        return c;
    }
};