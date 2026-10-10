void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int ni = n-1;
    int mi = m-1;
    int mni = m+n-1;

    while(ni>=0 && mi>=0){
        if(nums2[ni] > nums1[mi]){
            nums1[mni] = nums2[ni];
            ni--;
            mni--;
        }
        else{
            nums1[mni] = nums1[mi];
            mi--;
            mni--;
        }
    }
    while(ni>=0){
        nums1[mni] = nums2[ni];
        ni--;
        mni--;
    }
}