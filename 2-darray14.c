#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i <= j) printf("%d ", a[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }

    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i >= j) printf("%d ", a[i][j]);
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
