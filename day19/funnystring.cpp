string funnyString(string s) {
    int n = s.length();

    for (int i = 1; i < n; i++) {
        int leftDiff = abs(s[i] - s[i-1]);
        int rightDiff = abs(s[n-i] - s[n-i-1]);

        if (leftDiff != rightDiff) {
            return "Not Funny";
        }
    }
    return "Funny";
}
