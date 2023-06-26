class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxi = 0;
        while(left < right){
            int w = right - left;
            int h = min(height[left], height[right]);
            int area = h * w;
            maxi = max(maxi, area);
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else {
                left++;
                right--;
            }
        }
        return maxi;
    }
};


// The Below Solution has passed 54/61 tests cases but 
// Time Limit Exceeded  for this Solution

// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int n = height.size();
//         int area = 0;

//         for(int i=0;i<n;i++)
//         {
//             for(int j=i+1;j<n;j++)
//             {
//                 int b = min(height[i],height[j]);
//                 int l = j-i;
//                 int temparea = b*l;
//                 if(temparea > area){
//                     area = temparea;
//                 }
//             }
//         }

//         return area;
//     }
// };
