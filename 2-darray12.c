#include <stdio.h>
#include <math.h>

int main() {
    int a[2][2] = {{3, 4}, {1, 2}};
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += a[i][j] * a[i][j];
        }
    }

    double normal = sqrt(sum);
    printf("Normal of the matrix: %.2f\n", normal);
    return 0;
}
