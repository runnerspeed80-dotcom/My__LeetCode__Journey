int comp(const void *a , const void *b){
    return *(int*)a - *(int*)b;
}
int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    *returnSize = numsSize;

    int *squares = (int*)malloc(numsSize*sizeof(int));
    
    for(int i = 0 ; i < numsSize ; i++){
        squares[i] = (nums[i]*nums[i]);
    }

    qsort(squares , numsSize , sizeof(int) , comp);
    
    return squares;
}