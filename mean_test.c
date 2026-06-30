#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator using current time
    srand(time(NULL));

    int sum = 0;
    int n = 1000;
    
    // Generate 1000 random numbers and calculate their sum
    for (int i = 0; i < n; i++) {
        int random_number = (int) (10.0 * rand() / (RAND_MAX + 1.0));
        sum += random_number;
    }

    // Calculate the mean (average)
    // We cast sum to double to ensure floating-point division
    double mean = (double)sum / n;
    
    printf("Task 1: Mean Test\n");
    printf("Generated %d random numbers.\n", n);
    printf("Calculated Mean: %f (Expected ~4.5)\n", mean);
    
    return 0;
}
