#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trace = 0;

    for (int i = 0; i < 3; i++) {
        trace += a[i][i];
    }

    printf("Trace of the matrix: %d\n", trace);
    return 0;
}
