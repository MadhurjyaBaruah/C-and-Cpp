
#include <stdio.h>

void printDigitsInWords(int number) {
    int digit = number % 10;
    if (number / 10 != 0) {
        printDigitsInWords(number / 10);
    }

    switch (digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
        default: printf("Invalid digit ");
    }
}

int main() {
    int number;

    printf("Enter an integer number: ");
    scanf("%d", &number);

    printf("Number in words: ");
    if (number == 0) {
        printf("Zero");
    } else {
        printDigitsInWords(number);
    }
    printf("\n");

    return 0;
}

