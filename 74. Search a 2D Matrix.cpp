class Solution {
public:
    bool binarySearch(vector<int>& row, int target)
    {
        int low = 0, high = row.size() - 1;
        while(low <= high)
        {
            int mid = (low + high) >> 1;
            if(row[mid] == target) return true;
            else if(row[mid] > target)
            {
                high = mid - 1;
            }
            else 
                low = mid + 1;
        }
        return false;
    }
    
    
    // i = each_row  
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i=0; i<mat.size(); i++)
        {
            if(binarySearch(mat[i], x))
            {
                return true;
            }
        }
        return false;
    }
};