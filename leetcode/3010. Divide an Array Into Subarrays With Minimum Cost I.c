int minimumCost(int* nums, int numsSize) {
    int ans = nums[0];
    int num1 = 100, num2 = 100;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < num1) {
            num2 = num1;
            num1 = nums[i];
        } else if (nums[i] < num2) {
            num2 = nums[i];
        }
    }
    return ans + num1 + num2;
}
