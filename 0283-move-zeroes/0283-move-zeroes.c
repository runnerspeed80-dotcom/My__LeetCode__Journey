void moveZeroes(int* nums, int numsSize) {
    int temp=0;
    int p= 0;
    for(int i = 0; i < numsSize ; i ++){
        if(nums[i]!=0){
            temp = nums[p];
            nums[p] = nums[i];
            nums[i]= temp;
            p++;
        }
    }
    
}