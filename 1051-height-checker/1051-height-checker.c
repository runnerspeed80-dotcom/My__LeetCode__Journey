int heightChecker(int* heights, int heightsSize) {
    // 1. Create a tiny bucket array to count heights from 1 to 100.
    // This takes a fixed, tiny amount of memory regardless of array size!
    int count[101] = {0};
    for (int i = 0; i < heightsSize; i++) {
        count[heights[i]]++;
    }

    int total = 0;
    int current_expected_height = 1;

    // 2. Compare the original heights directly with our expected counts
    for (int i = 0; i < heightsSize; i++) {
        // Find the next height that actually should exist in sorted order
        while (count[current_expected_height] == 0) {
            current_expected_height++;
        }

        // If the current student's height doesn't match what it should be, count it
        if (heights[i] != current_expected_height) {
            total++;
        }

        // We used one instance of this height, so reduce the count
        count[current_expected_height]--;
    }

    return total;
}
