int surfaceArea(vector<vector<int>> A) {
    int H = A.size();
    int W = A[0].size();
    int area = 0;

    // top and bottom
    area += 2 * H * W;

    // sides
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            int h = A[i][j];

            // up
            if (i == 0) area += h;
            else area += max(0, h - A[i-1][j]);

            // down
            if (i == H-1) area += h;
            else area += max(0, h - A[i+1][j]);

            // left
            if (j == 0) area += h;
            else area += max(0, h - A[i][j-1]);

            // right
            if (j == W-1) area += h;
            else area += max(0, h - A[i][j+1]);
        }
    }

    return area;
}
