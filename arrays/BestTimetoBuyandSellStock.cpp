#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];   
        int profit = 0;      

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];              
            } else {
                profit = max(profit, prices[i] - buy); 
            }
        }

        return profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    int result = sol.maxProfit(prices);
    cout << "Maximum Profit: " << result << endl;

    return 0;
}
