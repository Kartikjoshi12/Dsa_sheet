long strangeCounter(long t) {
    long cycle_length = 3;
    while (t > cycle_length) {
        t -= cycle_length;
        cycle_length *= 2;
    }
    return cycle_length - t + 1;
}
