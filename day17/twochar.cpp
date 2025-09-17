bool isValid(const string &s) {
    for (int i = 1; i < (int)s.size(); i++) {
        if (s[i] == s[i - 1]) return false; // two same chars in a row → not alternating
    }
    return true;
}

int alternate(string s) {
    unordered_set<char> uniqueChars(s.begin(), s.end());
    int maxLen = 0;

    // Try every pair of unique characters
    for (auto it1 = uniqueChars.begin(); it1 != uniqueChars.end(); it1++) {
        for (auto it2 = next(it1); it2 != uniqueChars.end(); it2++) {
            char c1 = *it1, c2 = *it2;
            string filtered = "";

            // Keep only c1 and c2
            for (char ch : s) {
                if (ch == c1 || ch == c2) filtered.push_back(ch);
            }

            // Check if filtered string is valid alternating
            if (isValid(filtered)) {
                maxLen = max(maxLen, (int)filtered.size());
            }
        }
    }

    return maxLen;
}
