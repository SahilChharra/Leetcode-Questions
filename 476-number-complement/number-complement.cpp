class Solution {
public:
    int findComplement(int num) {
        int n = countbits(num);
        for(int i=0;i<n;i++){
            num=num^(1<<i);
        }
        return num;
    }

    int countbits(int n){
        int count=0;
        while(n>0){
            count++;
            n=n>>1;
        }
        return count;
    }
};