#include <stdio.h>

int main() {
    int i, j;
    char letter;
    int num;
    
    for(i = 5; i >= 1; i--) {
        letter = 'A';
        num = 1;
        for(j = 1; j <= i; j++) {
            printf("%c%d", letter++, num++);
        }
        printf("\n");
    }
    return 0;
}
