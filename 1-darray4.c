#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x, found = 0;
    
    printf("Enter number to search: ");
    scanf("%d", &x);
    
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            found = 1;
            break;
        }
    }
    
    if(found) printf("Number found\n");
    else printf("Number not found\n");
    return 0;
}
