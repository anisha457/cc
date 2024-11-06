#include<stdio.h>
int main(){
    int a=10;
    int *pointer;
    pointer =&a;
    printf("Value of a: %d\n", a);
    printf("Address of a: %p\n", &a);
    printf("Pointer stores address: %p\n", pointer);
    printf("Value stored at the address pointer points to: %d\n", *pointer);

    
    *pointer = 20;

   
    printf("\nAfter modifying value using pointer:\n");
    printf("Value of a: %d\n", a);
    printf("Value stored at the address ptr points to: %d\n", *pointer);

    return 0;
}
