#include <stdio.h>
#include <string.h>

// Example function declaration
int max(int val1, int val2);

int main() {
    // Prints to stdout
    printf("hello world\n");

    // Variable declarations
    int quantity, price, total, i;

    // Variable initializations
    quantity = 5;
    price = 88;

    // Arithmetic operation
    total = quantity + price;

    printf("quantity : %d\n", quantity);
    printf("price    : %d\n", price);
    printf("total    : %d\n", total);
    
    // Call the example function
    printf("max      : %d\n", max(quantity, price));

    // Array declaration
    int arr[10];

    // For loop (why are last two values not 0?)
    for (i = 0; i < 10; i++) {
        printf("arr at %d is %d\n", i, arr[i]);
    }

    // Pointers
    int addr_test = 500;
    // This is how to store a pointer
    int *addr_test_ptr = &addr_test;
    printf("value of addr_test is %d\n", addr_test);
    printf("address location of addr_test is %x\n", &addr_test);

    printf("address stored in _ptr variable is %x\n", addr_test_ptr);
    printf("value stored in _ptr using * is %d\n", *addr_test_ptr);

    // This is how to change the value the pointer is pointing to
    *addr_test_ptr = 5;
    printf("value of addr_test, modified via _ptr is %d,%d\n", addr_test, *addr_test_ptr);

    // Strings
    char name[5] = {'E','r','i','k','\0'};
    printf("name        : %s\n", name);

    // "Real strings"
    char address[] = "Saint street 5, 8888 Zorki";
    printf("address     : %s\n", address);
    printf("address len : %lu\n", strlen(address));

    return 0;
}

// Example function implementation
int max(int val1, int val2) {
    if (val1 > val2) {
        return val1;
    } else {
        return val2;
    }
}

