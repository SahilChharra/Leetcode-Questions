class Solution {
public:
    int countOdds(int low, int high) {
        int cnt = high-low+1;
        int oc=0;
        if(cnt%2==0){
            oc=cnt/2;
        }
        else{
            if((low%2!=0) || (high%2!=0)){
                oc=cnt/2 + 1;
            }
            else{
                oc = cnt/2;
            }
        }
        return oc;
    }
};