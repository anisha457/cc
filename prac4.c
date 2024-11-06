#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the upper part of the diamond

    // Upper part of the diamond
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print '*' symbols with a space in between
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part of the diamond
    for (int i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print '*' symbols with a space in between
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
