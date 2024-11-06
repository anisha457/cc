#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    
    for(int j = 0; j < 2; j++) {
        int temp = a[0][j];
        a[0][j] = a[1][j];
        a[1][j] = temp;
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
