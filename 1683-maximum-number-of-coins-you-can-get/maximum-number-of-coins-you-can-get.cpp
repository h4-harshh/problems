class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();

        int sum=0;

        sort(piles.begin(),piles.end());

        if(n==3){
            return piles[1];
        }

        int flag=n/3;

        for(int i=n-2;i>=flag;i-=2){
            cout<<piles[i]<<" ";
            sum+=piles[i];
        }

        return sum;
    }
};