#include <stdio.h>
#include <stdlib.h>

// Structure to hold training and self-learning times for each joiner
typedef struct {
    int training;
    int learning;
} Joiner;

// Comparison function to sort joiners by their self-learning time in descending order
int compare(const void* a, const void* b) {
    Joiner* joinerA = (Joiner*)a;
    Joiner* joinerB = (Joiner*)b;
    return joinerB->learning - joinerA->learning;  // Sort in descending order
}

int main() {
    int n;

    // Input the number of joiners
    printf("Enter the number of joiners: ");
    scanf("%d", &n);

    // Declare arrays for training and self-learning times
    Joiner joiners[n];

    // Input the training times
    printf("Enter the training times: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &joiners[i].training);
    }

    // Input the self-learning times
    printf("Enter the self-learning times: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &joiners[i].learning);
    }

    // Sort the joiners by self-learning time in descending order
    qsort(joiners, n, sizeof(Joiner), compare);

    int currentTrainingDay = 0;  // Track the current training day
    int totalDays = 0;  // Track the total days needed for all joiners to finish

    // Simulate the training and self-learning phases
    for (int i = 0; i < n; i++) {
        // Update the current training day after each joiner completes their training
        currentTrainingDay += joiners[i].training;

        // Calculate when the current joiner will finish both phases (training + self-learning)
        int finishDay = currentTrainingDay + joiners[i].learning;

        // Update the total number of days required to complete all phases
        if (finishDay > totalDays) {
            totalDays = finishDay;
        }
    }

    // Output the result
    printf("Minimum number of days needed: %d\n", totalDays);

    return 0;
}
