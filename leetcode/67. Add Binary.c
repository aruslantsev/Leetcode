char* addBinary(char* a, char* b) {
    int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int carry = 0;
    char* res = (char*)malloc(10005);
    int k = 0;
    while (i >= 0 || j >= 0 || carry) {
        int total = carry;

        if (i >= 0)
            total += a[i--] - '0';
        if (j >= 0)
            total += b[j--] - '0';
        res[k++] = (total % 2) + '0';
        carry = total / 2;
    }

    res[k] = '\0';
    for (int l = 0, r = k - 1; l < r; l++, r--) {
        char tmp = res[l];
        res[l] = res[r];
        res[r] = tmp;
    }

    return res;
}

/*******************************************************/

char* addBinary(char* a, char* b) {
    int la = strlen(a) - 1;
    int lb = strlen(b) - 1;
    char *ans = (char *) malloc(10002 * sizeof(char));
    size_t ptr = 0;
    int res = 0;
    while (la >= 0 || lb >= 0 || res > 0) {
        if (la >= 0) res += a[la--] - '0';
        if (lb >= 0) res += b[lb--] - '0';
        ans[ptr++] = (res % 2) + '0';
        res /= 2;
    }
    ans[ptr] = '\0';
    char t;
    int sz = strlen(ans);
    for (ptr = 0; ptr < sz / 2; ptr++) {
        t = ans[ptr];
        ans[ptr] = ans[sz - 1 - ptr];
        ans[sz - 1 - ptr] = t;
    }
    ans = realloc(ans, (sz + 1) * sizeof(char));
    return ans;
}
