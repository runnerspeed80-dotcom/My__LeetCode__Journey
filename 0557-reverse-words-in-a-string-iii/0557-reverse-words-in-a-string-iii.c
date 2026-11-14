char* reverseWords(char* s) {
    int i = 0;
    int j = 0;
    int count = 0;
    int len = strlen(s);
    char temp;

    while (count <= len) {
        if (s[count] == ' ' || s[count] == '\0') {
            j = count - 1;

            while (i < j) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }
            i = count + 1;
        }
        count++;
    }
    return s;
}