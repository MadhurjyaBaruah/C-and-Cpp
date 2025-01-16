#include <stdio.h>

int main() {
    int dayNumber;

    // Prompt the user for input
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &dayNumber);

    // Check the input and display the corresponding day
    if (dayNumber == 1) {
        printf("It's Sunday!\n");
    } else if (dayNumber == 2) {
        printf("It's Monday!\n");
    } else if (dayNumber == 3) {
        printf("It's Tuesday!\n");
    } else if (dayNumber == 4) {
        printf("It's Wednesday!\n");
    } else if (dayNumber == 5) {
        printf("It's Thursday!\n");
    } else if (dayNumber == 6) {
        printf("It's Friday!\n");
    } else if (dayNumber == 7) {
        printf("It's Saturday!\n");
    } else {
        printf("Invalid input. Please enter a number between 1 and 7.\n");
    }

    return 0;
}
