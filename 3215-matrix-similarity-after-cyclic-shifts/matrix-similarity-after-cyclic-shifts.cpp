class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        
        for(int i=0;i<mat.size();i++)
        {
            int h=mat[i].size();
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]!=mat[i][(j+k)%h])
                {
                    return false;
                }
            }
        }
        return true;
    }
};