vector<int> absolutePermutation(int n, int k) {
    vector<int> result;
    
    if (k == 0) {
        for (int i = 1; i <= n; i++) result.push_back(i);
        return result;
    }

    if (n % (2 * k) != 0) return {-1};

    bool add = true; // toggle between +k and -k
    for (int i = 1; i <= n; i++) {
        if (add) result.push_back(i + k);
        else result.push_back(i - k);

        if (i % k == 0) add = !add; // switch after every block of size k
    }

    return result;
}
