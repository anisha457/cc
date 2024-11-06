#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
 
    struct Person person1 = {"Anisha Goel", 18, 5.4};
    struct Person person2 = {"Ananya Singhal",18,5.5};
//displaying
    printf("Person 1 Details:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f feet\n", person1.height); 
    printf("Person 2 Details:\n");
    printf("Name: %s\n", person2.name);
    printf("Age: %d\n", person2.age);
    printf("Height: %.2f feet\n", person2.height);
    

    return 0;
}





