#include <bits/stdc++.h>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    // Step 1: Remove duplicates from ranked
    vector<int> uniqueRanked;
    uniqueRanked.push_back(ranked[0]);
    for (int i = 1; i < ranked.size(); i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanked.push_back(ranked[i]);
        }
    }

    vector<int> result;
    int n = uniqueRanked.size();
    int idx = n - 1; // start from lowest rank

    // Step 2: For each player score, check rank
    for (int score : player) {
        while (idx >= 0 && score >= uniqueRanked[idx]) {
            idx--; // move up the leaderboard
        }
        result.push_back(idx + 2); // rank is idx+2 because idx+1 is next higher score
    }

    return result;
}




