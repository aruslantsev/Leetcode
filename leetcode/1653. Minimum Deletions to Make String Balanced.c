#define min(a, b) (a) < (b)? (a) : (b)

int minimumDeletions(char* s) {
    int a;
    int b = 0;
    int ans;
    for (char *c = s; *c != '\0'; c++) {
        if (*c == 'a') a++;
    }
    ans = a + b;
    for (char *c = s; *c != '\0'; c++) {
        if (*c == 'a') {
            a--;
        } else {
            b++;
        }
        ans = min(ans, a + b);
    }
    return ans;
}


/*************************************************************/

#define min(a, b) (a) < (b)? (a) : (b)

int minimumDeletions(char* s) {
    int a = 0, b = 0;
    int cnt = 0;
    int ans = a + b;
    for (char *c = s; *c != '\0'; c++) {
        if (*c == 'a') {
            cnt++;
            a--;
        } else {
            b++;
        }
        ans = min(ans, a + b);
    }
    return ans + cnt;
}

