#define max(x, y) (x) > (y)? (x): (y)

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int ans = 0;
    for(int i = 1; i < pointsSize; i++) {
        ans += max(
            abs(points[i][0] - points[i - 1][0]),
            abs(points[i][1] - points[i - 1][1])
        );
    }
    return ans;
}
