class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr1D, int rows, int cols) {
        vector<vector<int>> arr2D(rows, vector<int>(cols));

        if (rows * cols != arr1D.size()) {
            return {};  
        }

        for (int i = 0; i < rows; i++) {        
            for (int j = 0; j < cols; j++) {    
                arr2D[i][j] = arr1D[i * cols + j];
            }
        }

        
        return arr2D;
    }
};