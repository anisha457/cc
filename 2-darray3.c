#include <stdio.h>

int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    printf("Main Diagonal:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", a[i][i]);
    }
    printf("\n");
    
    printf("Anti-Diagonal:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d ", a[i][2 - i]);
    }
    printf("\n");
    return 0;
}
