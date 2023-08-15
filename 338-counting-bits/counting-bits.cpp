class Solution {
public:

/*
0 ->0
1 ->1
10 -> 1
11 -> 2
100 -> 1
101 -> 2
110 -> 2
111 -> 3
1000 -> 1
1001 -> 2
1010 -> 2
1011 -> 3
1100 -> 2
1101 -> 3
1110 -> 3
1111 -> 4
10000 -> 1
*/
    vector<int> countBits(int n) {
        vector<int> t(n+1);
        t[0] = 0;
        for(int i=1;i<=n;++i){
            t[i] = t[i/2] + i%2;
        }
        return t;
    }
};