class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> temp;
        
        int count=0;
        int startRow=0;
        int endRow=matrix.size()-1;
        int startCol=0;
        int endCol=matrix[0].size()-1;
        int i;
        int row= matrix.size();
        int col=matrix[0].size();
        int total=row*col;
    
        while(count<total) {
        for(i=startCol; count<total && i<=endCol;i++){
            temp.push_back(matrix[startRow][i]);
            count++;
        }
        startRow++;
       
            
        for(i=startRow; count<total && i<=endRow;i++){
            temp.push_back(matrix[i][endCol]);
           count++;
        }
        endCol--;
        
        
        for(i=endCol;count<total && i>=startCol;i--){
            temp.push_back(matrix[endRow][i]);
            count++;
        }
        endRow--;
            
            for(i=endRow;count<total && i>=startRow;i--){
            temp.push_back(matrix[i][startCol]);
            count++;
        }
        startCol++;
        }
        
        return temp;
    } 
};