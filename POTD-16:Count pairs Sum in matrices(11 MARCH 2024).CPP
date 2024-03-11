class Solution{
public:	

	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    
	    int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(find(mat2,x-mat1[i][j],n)){
                    count++;
                }
            }
        }
        return count;
	    
	    
	}
};
