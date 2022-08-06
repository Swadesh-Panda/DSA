#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0,mini = INT_MAX;
        // the intuition is to select the peak for sell and bottom for buy by taking into consideration that the sell should be done after the buy.
        for(auto x: prices){
            // Compute the minimum price for buy
            mini = min(mini, x);
            // sell the product with the current price
            maxi = max(maxi, x - mini);
        }
        return maxi;
    }
};