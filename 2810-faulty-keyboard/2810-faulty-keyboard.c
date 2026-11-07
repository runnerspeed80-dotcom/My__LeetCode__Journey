char* finalString(char* s) {

    int len = strlen(s);
    char *c = malloc((len+1)*sizeof(char));
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'i') {
            int l = 0;
            int r = j-1;
            char temp;
            while (l < r) {
                temp = c[l];
                c[l] = c[r];
                c[r] = temp;
                l++;
                r--;
            }
        } else {
            c[j] = s[i];
            j++;
        }

    }
    c[j] = '\0';
    return c;
}