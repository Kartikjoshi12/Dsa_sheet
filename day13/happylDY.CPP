string happyLadybugs(string b) {
    unordered_map<char, int> freq;
    bool hasEmpty = false;

    for (char c : b) {
        if (c == '_') hasEmpty = true;
        else freq[c]++;
    }

    // Step 1: Any single bug -> NO
    for (auto &p : freq) {
        if (p.second == 1) return "NO";
    }

    // Step 2: If no empty, check current arrangement
    if (!hasEmpty) {
        for (int i = 0; i < b.size(); i++) {
            if ((i > 0 && b[i] == b[i - 1]) || (i < b.size() - 1 && b[i] == b[i + 1])) {
                continue;
            } else {
                return "NO";
            }
        }
    }

    // Step 3: Otherwise possible
    return "YES";
}
