vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here
        if(r==1 && c==1)
            return matrix[0];
        int top=0,left=0;
        vector<int> res;
        while(top<r && left<c){
            for(int i=left;i<c;i++)
                res.push_back(matrix[top][i]);
            for(int i=top+1;i<r;i++)
                res.push_back(matrix[i][c-1]);
            if(top!=r-1){
                for(int i=c-2;i>left;i--)
                    res.push_back(matrix[r-1][i]);
            }    
            if(left!=c-1){
                for(int i=r-1;i>top;i--)
                    res.push_back(matrix[i][left]);
            }
            top++;
            left++;
            r--;
            c--;
        }
        return res;
}
