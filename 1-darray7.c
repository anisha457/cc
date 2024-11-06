#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, count = 0;
    
    printf("Enter number to find occurrences: ");
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) count++;
    }
    
    printf("Occurrence of %d = %d\n", x, count);
    return 0;
}
