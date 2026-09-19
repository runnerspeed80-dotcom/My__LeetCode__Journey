bool isPalindrome(char* s) {
    int len = strlen(s);
    char f[len+1];
    int j=0;
    for(int i = 0; i<len ; i++){
        if(isalnum(s[i])){
            f[j] = s[i];
            j++;
        }
    }
    f[j] = '\0';

    int flen = strlen(f);

    for(int i = 0; i<flen ; i++ ){
        f[i] = tolower(f[i]);
    }
    for(int i = 0 ; i < flen/2 ; i++){
        if(f[i]!=f[flen-1-i] ){
            return false;
        }
    }
    return true;
}