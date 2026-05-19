class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
int row=matrix.size();
int col=matrix[0].size();
int start=0;
int end=row*col-1;

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(matrix[i][j]==target){
            return true;
        }
    }
}

return false;
    }
};