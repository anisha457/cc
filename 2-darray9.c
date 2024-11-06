#include <stdio.h>

int main() {
    int a[2][2] = {{4, 3}, {2, 1}};
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2 - 1; j++) {
            for(int k = j + 1; k < 2; k++) {
                if(a[i][j] > a[i][k]) {
                    int temp = a[i][j];
                    a[i][j] = a[i][k];
                    a[i][k] = temp;
                }
            }
        }
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
