bool isPalindrome(char* s) {
    int len = strlen(s);
    char final[len+1];
    int j=0;

    for(int i = 0; i<len; i++){
        if(isalnum(s[i])){

            final[j] = s[i];
            j++;
            

        }
    }
    final[j]= '\0';

    int flen = strlen(final);

    for(int i =0;i<flen ; i++){
        final[i] = tolower(final[i]);
    }

    for(int i = 0; i < flen/2 ; i++){
        if(final[i] != final[flen-1-i] ){
            return false;
        }


    }

    return true;

}