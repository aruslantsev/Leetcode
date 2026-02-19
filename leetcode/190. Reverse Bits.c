#define NUM_BITS 32

int reverseBits(int n) {
    int ans = 0;
    for (size_t counter = 0; counter < NUM_BITS; counter++) {
        ans = (ans << 1) | (n % 2);
        n /= 2;
    }
    return ans;
}

/*************************************************************************/

#define NUM_BITS 32

int reverseBits(int n) {
    int ans = 0;
    for (size_t counter = 0; counter < NUM_BITS; counter++) {
        ans <<= 1;
        ans |= (n % 2);
        n /= 2;
    }
    return ans;
}
