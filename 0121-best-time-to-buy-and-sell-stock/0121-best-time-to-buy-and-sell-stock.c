int maxProfit(int* prices, int pricesSize) {
    if(pricesSize <2){return 0;}

    int profit = 0;
    int min = prices[0];

    for(int i = 1 ; i < pricesSize ; i++){
        if(prices[i] < min){
            min = prices[i];
        }

        else{
            int cprofit = prices[i] - min;
            if(cprofit > profit){
                profit = cprofit;
            }
        }
    }
    return profit;
}