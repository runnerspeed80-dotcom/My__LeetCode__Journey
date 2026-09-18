/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    
    int *final = malloc(2*sizeof(int));

    for(int i=0;i<numsSize ; i++){
        for(int j=0;j<numsSize ; j++){
            if(nums[i]+nums[j]==target && i!=j){
                final[0]=i;
                final[1]=j;
                break;
            }        
        }            
    }

    *returnSize = 2;
    return final;    
}