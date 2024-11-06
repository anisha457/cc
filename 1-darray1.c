#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0, product = 1;
    
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        product *= arr[i];
    }
    
    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    return 0;
}
