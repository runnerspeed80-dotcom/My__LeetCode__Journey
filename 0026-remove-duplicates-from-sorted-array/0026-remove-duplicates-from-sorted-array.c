int removeDuplicates(int* nums, int numsSize) {
    int pos = 0;
    for(int i = 0; i < numsSize ; i ++){
        if(nums[i]!= nums[pos]){
            pos++;
            nums[pos] = nums[i];            
        }
    }
    return pos+1;
}