bool hasAlternatingBits(int n) {
    if (n == 0) return true;
    int curr, prev;
    curr = n % 2;
    n /= 2;
    while (n > 0) {
        prev = curr;
        curr = n % 2;
        n /= 2;
        if (prev == curr) return false;
    }
    return true;
}

/***********************************************/

bool hasAlternatingBits(int n) {
    int curr = n % 2;
    n /= 2;
    while (n > 0) {
        if (curr == n % 2) return false;
        curr = n % 2;
        n /= 2;
    }
    return true;
}
