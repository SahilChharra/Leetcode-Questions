class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        int val = 1e6,freq=0;

        for(auto i:nums){
            if(i%2==0){
                mp[i]++;

                if(mp[i]>freq or mp[i]==freq and i<val){
                    val=i;
                    freq=mp[i];
                }
            }
        }

        return freq==0? -1 : val;
    }
};