#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    
    for(int i = 0; i < 2; i++) {
        int temp = a[i][0];
        a[i][0] = a[i][1];
        a[i][1] = temp;
    }
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}