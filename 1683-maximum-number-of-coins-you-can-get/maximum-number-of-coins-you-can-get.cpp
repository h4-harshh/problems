class Solution {
public:
    int maxCoins(vector<int>& piles) {

        int n=piles.size();


        sort(piles.begin(),piles.end());

        int b=0;
        int m=n-2;

        int sum=0;
        while(b<m)
        {
            sum+=piles[m];
            b++;
            m-=2;
        }
        return sum;
    }
};