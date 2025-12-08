#include <stdio.h>

int main() {
    float marks[5], sum = 0.0, percentage;
    int i;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i]; // Adding marks to sum
    }

    // Calculating percentage
    percentage = (sum / 500) * 100;

    // Displaying the result
    printf("\nTotal Marks: %.2f\n", sum);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

