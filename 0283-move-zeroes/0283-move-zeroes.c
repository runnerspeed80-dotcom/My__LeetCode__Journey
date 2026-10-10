void moveZeroes(int* nums, int numsSize) {
    int temp = 0;
    for(int i = 0; i< numsSize ; i++){
        for(int j = 0; j < numsSize-1 ; j++){
            if(j<numsSize && nums[j] ==0){
                nums[j] = nums[j+1];
                nums[j+1]= 0;
            }
        }
        
    }
    
}