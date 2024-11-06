#include <stdio.h>

int main() {
    int a[3][3] = {{0, 0, 1}, {0, 2, 0}, {0, 0, 0}};
    int zero_count = 0, n = 3 * 3;
    
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(a[i][j] == 0) zero_count++;
        }
    }
    
    if(zero_count > n / 2) {
        printf("Matrix is sparse\n");
    } else {
        printf("Matrix is not sparse\n");
    }
    return 0;
}
