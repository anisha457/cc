#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int main_diag_sum = 0, opposite_diag_sum = 0;

    for (int i = 0; i < 3; i++) {
        main_diag_sum += a[i][i];
        opposite_diag_sum += a[i][2 - i];
    }

    printf("Sum of main diagonal: %d\n", main_diag_sum);
    printf("Sum of opposite diagonal: %d\n", opposite_diag_sum);
    return 0;
}
