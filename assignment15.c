#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int lower, upper, randomNumber;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    if (lower > upper) {
        printf("Invalid range!\n");
        return 0;
    }

    // Seed the random number generator
    srand(time(0));

    // Generate random number in range [lower, upper]
    randomNumber = (rand() % (upper - lower + 1)) + lower;

    printf("Random Number = %d\n", randomNumber);

    return 0;
}
