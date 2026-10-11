int maxProfit(int* prices, int pricesSize) {
    if(pricesSize < 2){
        return 0;
    }
    int small = 0;
    int profit = 0;

    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < prices[small]) {
            small = i;
        }

        if (profit < prices[i] - prices[small]) {
            profit = prices[i] - prices[small];
        }
    }
    return profit;
}