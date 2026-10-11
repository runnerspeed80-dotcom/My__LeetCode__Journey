int comp(const void *a , const void *b){
    int val1 = *(const int*)a;
    int val2 = *(const int*)b;
    return (val2> val1) - (val1 > val1);
}


bool containsDuplicate(int* nums, int numsSize) {

    qsort(nums , numsSize , sizeof(int) , comp);

    for(int i = 1; i < numsSize ; i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
    return false;
    
}