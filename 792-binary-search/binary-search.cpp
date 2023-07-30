class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int f=0;
        int l=n-1;

        while(f<=l){
            int mid =(f+l)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                f=mid+1;
            }
            else{
                l=mid-1;
            }
        }

        return -1;
    }
};