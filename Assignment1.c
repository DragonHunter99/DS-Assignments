#include <stdio.h>

// Function prototype for call by value
void callByValue(int x);

// Function prototype for call by reference
void callByReference(int *y);

int main() {
    int num = 10;
    
    printf("Original value of num: %d\n", num);

    // Call by value
    callByValue(num);
    printf("After call by value: %d\n", num);

    // Call by reference
    callByReference(&num);
    printf("After call by reference: %d\n", num);

    return 0;
}

// Function definition for call by value
void callByValue(int x) {
    x = x * 2;
    printf("Inside call by value: %d\n", x);
}

// Function definition for call by reference
void callByReference(int *y) {
    *y = *y * 2;
    printf("Inside call by reference: %d\n", *y);
}
