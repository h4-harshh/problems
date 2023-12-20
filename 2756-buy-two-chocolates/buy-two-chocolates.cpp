class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        // sort(prices.begin(),prices.end());

        // int sum=prices[0]+prices[1];

        // if(sum<=money)
        // {
        //     return money-sum;
        // }

        // return money;


        int minprice=INT_MAX;
        int sec_min=INT_MAX;

        for(auto price:prices)
        {
            if(price<minprice)
            {
                sec_min=minprice;
                minprice=price;
            }
            else{
                sec_min=min(sec_min,price);
            }
        }

        if(minprice+sec_min > money)
        {
            return money;
        }

        return money-(minprice+sec_min);
    }
};