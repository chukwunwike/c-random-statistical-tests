#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Array to hold counts for pairs 00 through 99
    // Initialized to 0
    int counts[100] = {0};
    int n = 10000;
    
    // Generate 10,000 pairs of random numbers
    for (int i = 0; i < n; i++) {
        // Generate the first and second digits
        int num1 = (int) (10.0 * rand() / (RAND_MAX + 1.0));
        int num2 = (int) (10.0 * rand() / (RAND_MAX + 1.0));
        
        // Combine them to form a two-digit number (e.g., num1=1, num2=4 -> 14)
        int pair = (num1 * 10) + num2;
        
        // Increment the count for that specific pair
        counts[pair]++;
    }

    printf("Task 4: Serial Test\n");
    printf("Total generated pairs: %d\n", n);
    printf("Expected occurrence for each pair is close to 1.00%%\n\n");
    
    // Calculate and print the frequency of each pair
    for (int i = 0; i < 100; i++) {
        double percentage = ((double)counts[i] / n) * 100.0;
        // Formatting with %02d to ensure single digits have a leading zero (e.g. 02, 09)
        printf("Pair %02d occurred %3d times (%5.2f%%)\n", i, counts[i], percentage);
    }
    
    return 0;
}
