#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    int odd_count = 0;
    int even_count = 0;
    int n = 10000;
    
    // Generate 10,000 random numbers and group them by odd/even
    for (int i = 0; i < n; i++) {
        int random_number = (int) (10.0 * rand() / (RAND_MAX + 1.0));
        
        // Modulo operator checks remainder when divided by 2
        if (random_number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Calculate percentages
    double odd_percentage = ((double)odd_count / n) * 100.0;
    double even_percentage = ((double)even_count / n) * 100.0;

    printf("Task 3: Odd-Even Test\n");
    printf("Total generated numbers: %d\n", n);
    printf("Expected occurrence for each group is close to 50%%\n\n");
    
    printf("Even numbers occurred %4d times (%5.2f%%)\n", even_count, even_percentage);
    printf("Odd numbers  occurred %4d times (%5.2f%%)\n", odd_count, odd_percentage);
    
    return 0;
}
