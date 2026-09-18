void reverseString(char* s, int sSize) {
    char e[sSize];
    for(int i  = 0; i< sSize ; i++){
        e[i] = s[i];
    }
    for(int i =0;i<sSize;i++){
        s[i] = e[sSize-i-1];
    }
}