class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int i=-1;
        int j=0;

        while(j<n){
            if(a[j]!=0){
                i++;
                swap(a[i],a[j]);
            }
            j++;
        }
    }
};