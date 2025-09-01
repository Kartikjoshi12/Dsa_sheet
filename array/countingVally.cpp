int countingValleys(int steps, string path) {
    int altitude = 0;   // current level (sea level = 0)
    int valleys = 0;    // number of valleys

    for (int i = 0; i < steps; i++) {
        if (path[i] == 'U') {
            altitude++;
            // if we just came UP to sea level → completed a valley
            if (altitude == 0) {
                valleys++;
            }
        } 
        else if (path[i] == 'D') {
            altitude--;
        }
    }

    return valleys;
}
