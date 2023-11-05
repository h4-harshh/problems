class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        
        int n=arr.size();
        int maxel=*max_element(arr.begin(),arr.end());
        
        if(k >= n)
        {
            return maxel;
        }

        int winner=arr[0];
        int winst=0;

        for(int i=1;i<n;i++)
        {
            if(arr[i] > winner)
            {
                winner=arr[i];
                winst =1;
            }
            else{
                winst++;
            }

            if((winst == k) || winner == maxel)
            {
                return winner;
            }
        }
        return winner;
    }
};