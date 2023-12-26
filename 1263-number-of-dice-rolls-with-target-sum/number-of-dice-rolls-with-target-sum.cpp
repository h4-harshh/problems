class Solution {
public:
    long M = 1e9+7;
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> t(n+1, vector<int>(target+1));
        
        t[0][0] = 1;
        
        for(int i = 1; i <= n; i++) { 
            for(int j = 1; j<= target; j++) { 
                for(int f = 1; f <= k; f++) {

                    if(f <= j) {
                        t[i][j] = (t[i][j] + t[i-1][j-f])%M;
                    }
                }
            }
        }
        
        return t[n][target];
        
    }
};