/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int less = 0;
    int count = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < target) {
            less++;
        } else if (nums[i] == target) {
            count++;
        }
    }

    int* arr = malloc(sizeof(int) * count);

    for (int i = 0; i < count; i++) {
        arr[i] = less + i;
    }

    *returnSize = count;
    return arr;
}