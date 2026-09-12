int comp(const void *x , const void *y){
    return (*(int*)x -*(int*)y);
}


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    int sum = n+m;
    

    for(int i = 0; i< n ; i++){
        nums1[i+m] = nums2[i];  
    }
    

    qsort(nums1 , sum , sizeof(int), comp);

    
}