/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    *returnSize =2 ;
    int *final = malloc(2*sizeof(int));
    
    int i = 0;
    int j = numbersSize-1;

    while(i<j){
        
        if(numbers[i] + numbers[j]<target){
            i++;
        }
        else if(numbers[i] + numbers[j]>target){
            j--;
        }
        else{
            final[0] = i+1;
            final[1] = j+1;
            break;
        }
    }
    

    return final;
}