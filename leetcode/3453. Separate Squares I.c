#define max(a, b)   (a) > (b)? (a) : (b)
#define min(a, b)   (a) < (b)? (a) : (b)

double separateSquares(int** squares, int squaresSize, int* squaresColSize) {
    const double eps = 1e-5;
    double low = 0, high = 0, mid, height, width, area, total_area = 0;

    for (size_t ptr = 0; ptr < squaresSize; ptr++) {
        total_area += pow(squares[ptr][2], 2);
        high = max(high, squares[ptr][1] + squares[ptr][2]);
    }

    while (high - low >= eps) {
        mid = (high + low) / 2;
        area = 0;
        for (size_t ptr = 0; ptr < squaresSize; ptr++) {
            if (squares[ptr][1] < mid) {
                area += (min(squares[ptr][2], mid - squares[ptr][1])) * squares[ptr][2];
            }
        }
        if (area >= total_area / 2) {
            high = mid;
        } else {
            low = mid;
        }
    }
    return low;
}
