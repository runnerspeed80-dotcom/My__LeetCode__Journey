int firstUniqChar(char* s) {

    int arr[26] = {0};
    int len = strlen(s);

    for(int i = 0; i < len ; i++){
        int num = s[i] -'a';
        arr[num]++;
    }

    for(int i = 0; i< len ; i++){
        int num = s[i] -'a';
        if(arr[num]==1){
            return i;
        }
    }
    return -1;
    
}