#include <stdio.h>

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // Missing 3
    int n = sizeof(arr) / sizeof(arr[0]) + 1;
    int xor_sum = 0;
    
    for(int i = 1; i <= n; i++) {
        xor_sum ^= i;
    }
    for(int i = 0; i < n - 1; i++) {
        xor_sum ^= arr[i];
    }
    
    printf("Missing number = %d\n", xor_sum);
    return 0;
}
