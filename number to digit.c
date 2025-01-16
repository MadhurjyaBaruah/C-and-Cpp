#include <stdio.h>

int main() {
    int number;

    // Accept an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Extract each digit and print its word representation
    while (number != 0) {
        int digit = number % 10;
        switch (digit) {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            default:
                printf("Invalid digit ");
        }

        // Move to the next digit
        number /= 10;
    }

    printf("\n");

    return 0;
}

