#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int take = -1;
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] >= prices[i-1]){
                profit = profit + prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};
