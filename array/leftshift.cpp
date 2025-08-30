

vector<int> rotLeft(vector<int> a, int d) {
    for (int i = 0; i < d; i++) {
        int first = a[0];  // take current first
        for (int j = 0; j < a.size() - 1; j++) {
            a[j] = a[j + 1];  // shift left
        }
        a[a.size() - 1] = first;  // put saved first at end
    }
    return a;
}
