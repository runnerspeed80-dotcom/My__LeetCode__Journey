int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {

    int sum[accountsSize];
    int largest = 0;

    for(int i = 0; i < accountsSize ; i++){

        sum[i] = 0;
        
        for(int j = 0 ; j < accountsColSize[i] ; j++){
            sum[i] += accounts[i][j];

            
        }
        

        if(sum[i] > largest){

            largest = sum[i];

        }

    }

    return largest ; 
    
}