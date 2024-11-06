#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pyramid

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        
        // Print '*' symbols for the current row
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
