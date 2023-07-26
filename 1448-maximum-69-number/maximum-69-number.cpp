class Solution {
public:
    int maximum69Number (int num) {
        int pv=1;
        int kv=0;

        while(num/pv){
            if((num/pv)%10==6){
                kv=pv;
            }
            pv*=10;
        }

        return num - 6*kv + 9*kv;
    }
};