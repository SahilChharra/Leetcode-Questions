class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int third_maximum=0;
        int n = nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i]!=nums[i-1]){
                count++;
                third_maximum=nums[i];
            }
            else if(i==1 && nums[i]==nums[i-1]){
                count++;
                third_maximum=nums[i];
            }

            if(count>2){
                return third_maximum;
            }
        }

        if(count+1==3 && nums[0]!=nums[1]){
            return nums[0];
        }

        return nums[n-1];
    }
};