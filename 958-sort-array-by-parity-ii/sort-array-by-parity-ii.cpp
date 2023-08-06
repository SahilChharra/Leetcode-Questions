class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> even;
        vector<int> odd;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        int i1=0,i2=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                v.push_back(even[i1]);
                i1++;
            }
            else{
                v.push_back(odd[i2]);
                i2++;
            }
        }
        return v;
    }
};