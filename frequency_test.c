#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Array to hold counts for digits 0 through 9
    // Initialized to 0
    int counts[10] = {0};
    int n = 10000;
    
    // Generate 10,000 random numbers and tally occurrences
    for (int i = 0; i < n; i++) {
        int random_number = (int) (10.0 * rand() / (RAND_MAX + 1.0));
        counts[random_number]++;
    }

    printf("Task 2: Frequency Test\n");
    printf("Total generated numbers: %d\n", n);
    printf("Expected occurrence for each digit is close to 10%%\n\n");
    
    // Calculate and print the frequency of each digit
    for (int i = 0; i < 10; i++) {
        double percentage = ((double)counts[i] / n) * 100.0;
        printf("Digit %d occurred %4d times (%5.2f%%)\n", i, counts[i], percentage);
    }
    
    return 0;
}
