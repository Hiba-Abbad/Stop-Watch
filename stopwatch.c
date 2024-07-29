#include <stdio.h>
#include <time.h>

int main() {
    int choice;
    time_t start_time, end_time;
    double elapsed_time;

    while (1) {
        printf("Simple Stopwatch\n");
        printf("1. Start\n");
        printf("2. Stop\n");
        printf("3. Reset\n");
        printf("4. Quit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Start the stopwatch
                printf("Stopwatch started...\n");
                start_time = time(NULL);  // Record the start time
                break;

            case 2:
                // Stop the stopwatch
                end_time = time(NULL);  // Record the end time
                elapsed_time = difftime(end_time, start_time);  // Calculate elapsed time
                printf("Elapsed time: %.2f seconds\n", elapsed_time);
                break;

            case 3:
                // Reset the stopwatch
                printf("Stopwatch reset.\n");
                start_time = 0;
                end_time = 0;
                elapsed_time = 0.0;
                break;

            case 4:
                // Quit the program
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
                break;
        }
    }

    return 0;
}
