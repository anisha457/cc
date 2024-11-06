#include <stdio.h>

int main() {
    int a[2][2] = {{4, 3}, {2, 1}};
    
    for(int j = 0; j < 2; j++) {
        for(int i = 0; i < 2 - 1; i++) {
            for(int k = i + 1; k < 2; k++) {
                if(a[i][j] > a[k][j]) {
                    int temp = a[i][j];
                    a[i][j] = a[k][j];
                    a[k][j] = temp;
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
