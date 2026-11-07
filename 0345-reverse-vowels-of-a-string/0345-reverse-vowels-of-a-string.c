char* reverseVowels(char* c) {
    char temp;
    int len = strlen(c);
    int left = 0;
    int right = len - 1;

    if(len == 1){
        return c;
    }

    while (left < right) {
        while (left < right && c[left] != 'A' && c[left] != 'E' &&
               c[left] != 'I' && c[left] != 'O' && c[left] != 'U' &&
               c[left] != 'a' && c[left] != 'e' && c[left] != 'i' &&
               c[left] != 'o' && c[left] != 'u') {
            left++;
        }
        while (left < right && c[right] != 'A' && c[right] != 'E' &&
               c[right] != 'I' && c[right] != 'O' && c[right] != 'U' &&
               c[right] != 'a' && c[right] != 'e' && c[right] != 'i' &&
               c[right] != 'o' && c[right] != 'u'){
                right--;
               }
        temp = c[right];
        c[right] = c[left];
        c[left] = temp;
        left++;
        right--;
    }
    return c;
}