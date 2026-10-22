int isPrefixOfWord(char* sentence, char* searchWord) {
    int word = 1;
    int len = strlen(sentence);
    int size = strlen(searchWord);

    for(int i = 0; i< len ; i++){
        if(i==0 ||sentence[i-1]==' ' ){
            if(strncmp(&sentence[i] , searchWord , size)==0){
                return word;
            }
        }
        if(sentence[i]== ' '){
            word++;
        }
    }

    return -1;
    
}